#include <iostream>

using namespace std;

// Struct-based declaring
struct Human
{
    int Salary{};
    int Age{};
};
Human humans[5]{};

int main(int argc, const char** argv)
{

    // Declaring arrays
    int employeeSalary[20]{};

    // Auto-Initializing Arrays
    int employeeSalaryAuto[] = {1000, 2000, 3000};

    // Indexing
    employeeSalary[0] = 5000;
    employeeSalary[1] = 4000;
    employeeSalary[2] = 4500;
    employeeSalary[3] = 5200;

    // Ranged-Based For Loop
    for( auto a: employeeSalary )
    {
        cout << a << " ";
    }
    cout << endl;

    // Struct-based indexing
    humans[0].Salary = 1000;
    humans[0].Age = 29;

    // Ranged-Based For Loop
    for( auto a: humans )
    {
        cout << a.Salary << " ";
        cout << a.Age << " ";
    }

    return 0;
}
