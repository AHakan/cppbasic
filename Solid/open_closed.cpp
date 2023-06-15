// Open Closed Principle
//
// Software entities (classes, modules, functions, etc.) 
// should be open for extension, but closed for modification.

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
 * @brief Auth service's interface
 * 
 */
class IAuthService
{
    public:
        virtual bool login()=0;
        virtual bool logout()=0;
};

/**
 * @brief Customer auth service
 * 
 */
class CustomerAuth: public IAuthService
{
    public:
        bool login()
        {
            std::cout << "Customer login." << std::endl;
            
            return true;
        }

        bool logout()
        {
            std::cout << "Customer Logout." << std::endl;

            return true; 
        }
};

/**
 * @brief Employee auth service
 * 
 */
class EmployeeAuth: public IAuthService
{
    public:
        bool login()
        {
            std::cout << "Employee login." << std::endl;
            
            return true;
        }

        bool logout()
        {
            std::cout << "Employee Logout." << std::endl;

            return true; 
        }
};

/**
 * @brief Auth service
 * 
 */
class AuthService
{
    public:      
        virtual bool login(IAuthService& auth)
        {
            auth.login();
        }

        virtual bool logout(IAuthService& auth)
        {
            auth.logout();
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
    AuthService auth;
    CustomerAuth cusAuth;

    auth.login(cusAuth);

    return 0;
}

