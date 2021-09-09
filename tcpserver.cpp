#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>

int main(int argc, const char** argv)
{
	// Create a socket
	int listening = socket(AF_INET, SOCK_STREAM, 0);

	if( listening == -1 )
	{
		std::cerr << "Can't create a socket!";
		return -1;
	}

	int port = 8080;
    std::string ipAdd= "127.0.0.1";

	// Bind the socket to a IP / port
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	// hint.sin_addr.s_addr = INADDR_ANY;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, ipAdd.c_str(), &hint.sin_addr);

	if( bind(listening, (sockaddr *)&hint, sizeof(hint)) < 0 )
	{
		std::cerr << "Can't bind to IP/port";
		return -2;
	}

	// Mark the socket for listening in
	if( listen(listening, SOMAXCONN) == -1 )
	{
		std::cerr << "Can't listen!";
		return -3;
	}

	std::cout << "Server started! IP: " << ipAdd << ":" << port << "\r\n";

	// Accept a call
	sockaddr_in client;
	socklen_t clientSize = sizeof(client);
	char host[NI_MAXHOST] = {0};
	char svc[NI_MAXSERV] = {0};

	int clientSocket = accept(listening, (sockaddr *)&client, &clientSize);

	if( clientSocket == -1 )
	{
		std::cerr << "Problem with client connecting!";
		return -4;
	}

	// Close the listening socket
	close(listening);

	memset(host, 0, NI_MAXHOST);

	int result = getnameinfo((sockaddr *)&client, sizeof(client), host, NI_MAXHOST, svc, NI_MAXSERV, 0);

	if( result )
	{
		std::cout << host << " connected on " << svc << std::endl;
	}
	else
	{
		inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
		std::cout << host << " connected on " << ntohs(client.sin_port) << std::endl;
	}

	char buf[4096];

	while( true )
	{
		memset(buf, 0, 4096);

		int bytesRecv = recv(clientSocket, buf, 4096, 0);

		if( bytesRecv == -1 )
		{
			std::cerr << "There was a connection issue." << std::endl;
			break;
		}

		if ( bytesRecv == 0 )
		{
			std::cout << "The client disconnected." << std::endl;
			break;
		}

		std::cout << "Received: " << std::string(buf, 0, bytesRecv) << std::endl;

		send(clientSocket, buf, bytesRecv + 1, 0);
	}

	// Close the socket

	close(clientSocket);

	return 0;
}