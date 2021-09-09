#include <iostream>
#include <netinet/in.h>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>

int main(int argc, const char** argv)
{

    // Create a socket
    int sock = socket(AF_INET, SOCK_STREAM, 0);

    if( sock == -1 )
    {
        std::cerr << "Can't create a socket!";
        return -1;
    }

    // Create a hint structure for the server we're connecting with
    int port = 8080;
    std::string ipAdd= "127.0.0.1";

    sockaddr_in hint;
    hint.sin_family =  AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAdd.c_str(), &hint.sin_addr);

    // Connect to the server on the socket
    int connectRes = connect(sock, (sockaddr *)&hint, sizeof(hint));

    if( connectRes == -1 )
    {
        std::cerr << "Server not found!";
        return -1;
    }

    // While loop
    char buf[4096];
    std::string userInput;

    do{
        // Enter lines of text
        std::cout << "> ";
        std::getline(std::cin, userInput);

        // Send to server
        int sendRes = send(sock, userInput.c_str(), userInput.size()+1, 0);

        if( sendRes == -1 )
        {
            std::cout << "Could not send to server\r\n";
            continue;
        }

        // Wait for response
        memset(buf, 0, 4096);

        int bytesRecv = recv(sock, buf, 4096, 0);

        if( bytesRecv == -1 )
        {
            std::cout << "There was an error getting response from server\r\n";
        }
        else
        {
            // Display response
            std::cout << "Server > " << std::string(buf, bytesRecv) << "\r\n";
        }
    } while(true);

    close(sock);

    return 0;
}
