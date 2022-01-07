#include <iostream>
#include <string>

class Company
{
public:
    Company(std::string cName)
    {
        setCompanyName(cName);
    }

    void setCompanyName(std::string cName)
    {
        companyName = cName;
    }

    std::string getCompanyName()
    {
        return companyName;
    }

    void maximumSalary(int salary1, int salary2, int salary3)
    {
        int maximumValue = salary1;

        if (salary2 > maximumValue)
            maximumValue = salary2;

        if (salary3 > maximumValue)
            maximumValue = salary3;

        setMaximumSalary(maximumValue);
    }

    void setMaximumSalary(int max)
    {
        maxSalary = max;
    }

    int getMaximumSalary()
    {
        return maxSalary;
    }

    void displayCompanyInfo()
    {
        std::cout << "Company Name: " << getCompanyName() << '\n';
        std::cout << "Maximum Salary: " << getMaximumSalary() << std::endl;
    }

private:
    int maxSalary;
    std::string companyName;
};

int main(int argc, char const *argv[])
{
    Company company1("A Company");

    company1.maximumSalary(10000,15000,20000);
    
    company1.displayCompanyInfo();

    return 0;
}
