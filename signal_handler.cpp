// Signals are the interrupts that force an OS to stop its ongoing task and attend the task for which the interrupt has been sent.
// These interrupts can pause a service in any programs of an OS. Similarly, C++ also offers various signals which it can catch and process in a program.

// SIGINT - SIGTERM - SIGBUS - SIGILL - SIGALRM - SIGABRT - SIGSTOP - SIGSEGV - SIGFPE - SIGUSR1 - SIGUSR2
#include <iostream>
#include <csignal>

using namespace std;

void signal_handler( int signal_num ) {
    cout << "The interrupt signal is (" << signal_num << "). \n";

    // terminate program
    exit(signal_num);
}

int main()
{
    int count = 0;
    signal(SIGSEGV, signal_handler);
    // register signal SIGSEGV and signal handler

    while(++count) {
      cout << "Hello..." << endl;
      if( count == 5 )
         raise(SIGSEGV);
    }
    return 0;
}