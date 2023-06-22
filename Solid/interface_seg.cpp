// Interface Segregation Principle
// 
// The principle defines that no code should be forced to depend on methods 
// it does not use.

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
 * @brief Auth login service's interface
 * 
 */
class IAuthLoginService
{
    public:
        virtual bool login()=0;
};

/**
 * @brief Auth logout service's interface
 * 
 */
class IAuthLogoutService
{
    public:
        virtual bool logout()=0;
};

/**
 * @brief Customer auth service
 *          that can login, logout.
 * 
 */
class CustomerAuth: public IAuthLoginService, IAuthLogoutService
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
 *          that just can login
 * 
 */
class EmployeeAuth: public IAuthLoginService
{
    public:
        bool login()
        {
            std::cout << "Employee login." << std::endl;
            
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
        virtual bool login(IAuthLoginService& auth)
        {
            auth.login();
        }

        virtual bool logout(IAuthLogoutService& auth)
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

