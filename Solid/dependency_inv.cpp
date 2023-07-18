// Dependency Inversion Principle
//
// The general idea of this principle is as simple as it is important: 
// High-level modules, which provide complex logic, should be easily reusable 
// and unaffected by changes in low-level modules, which provide utility features.

#include <iostream>
#include <string>


/**
 * @brief Message service's interface
 * 
 */
class IMessage
{
    public:
        virtual void send()=0;
};

/**
 * @brief Email class
 * 
 */
class Email: public IMessage
{
    public:
        void send()
        {
            std::cout << "Email is sending." << std::endl;
        }
};

/**
 * @brief Sms class
 * 
 */
class Sms: public IMessage
{
    public:
        void send()
        {
            std::cout << "Sms is sending." << std::endl;
        }
};

/**
 * @brief Notification class
 * 
 */
class Notification
{
    public:
        void send(IMessage& msg)
        {
            msg.send();
        }
};

/**
 * @brief Main
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{
    Notification ntfy;

    Email email;

    ntfy.send(email);

    Sms sms;

    ntfy.send(sms);
    
    return 0;
}

