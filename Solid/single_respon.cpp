// Single Responsibility Principle
//
// A class should be responsible to one, 
// and only one, actor.

#include <iostream>
#include <string>

/**
 * @brief User service
 * 
 */
class UserService 
{
    public:
        std::string userFirstName;
        std::string userLastName;

        std::string getName() const
        {
            return userFirstName + " " + userLastName;
        }
};

/**
 * @brief Auth service
 * 
 */
class AuthService
{
    public:
        bool login()
        {
            std::cout << "Login." << std::endl;
            
            return true;
        }

        bool logout()
        {
            std::cout << "Logout." << std::endl;

            return true; 
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
    
    return 0;
}

