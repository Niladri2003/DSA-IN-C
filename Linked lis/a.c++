#include <iostream>
using std::string;
using namespace std;
class Employee
{
public:
    string Name;
    string Company;
    int Age;
    void display()
    {
        std::cout << "Name" << Name << std::endl;
        std::cout << "Comapny" << Company << std::endl;
    }
};
int main()
{
    Employee em1;
    em1.Name = "ayan";
    em1.Age = 55;
    em1.Company = "youtube";
    em1.display();
}