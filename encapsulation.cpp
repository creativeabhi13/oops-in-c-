/* encapsulation-it is an idea of bounding or trying together data and the method that operate on that data so that they are grouped together within a class.it is also called data hiding .../ the wrapping od data and function in a single unit ...

to encapsulate the data or to access the hidden data (which is basically private )
we will two concept   here setter and getter

*/

#include <iostream>
using namespace std;
class employee
{
private:
    string Name;
    string company;
    int Age;

public:
    // setter
    void setName(string name)
    {
        Name = name;
    }
    //getter
    string getName()
    {
        return Name;
    }
    void setcompany(string company)
    {
        company = company;
    }
    string getcompany()
    {
        return company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }
    void intro()
    {
        cout << "Name--" << Name << endl;
        cout << "company--" << company << endl;
        cout << "age--" << Age << endl;
    }
    // constructor
    employee(string name, string company, int age)
    {
        Name = name;
        company = company;
        Age = age;
    }
};
int main()
{
    employee employee1 = employee("abhishek kumar", "creativeabhi13", 89);
    employee1.intro();

    employee employee2 = employee("ashwani kumar", "creativeabhi13", 82);
    employee2.intro();

    employee1.setAge(21);
    employee1.setcompany("creativeabhi13");
    cout << employee1.getName() << " is " << employee1.getAge() << " old "
         << " and "
            " working "
            " in "
         << employee1.getcompany() << endl;

    employee2.setAge(17);
    employee2.setcompany("creativeabhi13");
    cout << employee1.getName() << " is " << employee1.getAge() << " old "
         << " and "
         << " working "
            " in "
         << employee2.getcompany() << endl;
}