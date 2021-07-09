/*
Abstraction meaning hiding of complex thing behind the procedure which makes those things simple...
it refers to act of representing essential factors withoput including background details .


*/
#include <iostream>
using namespace std;
// absrtraction hidden details
class Abstractemployee
{
    virtual void Askforpromotion() = 0;
};
class employee : Abstractemployee
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
    void Askforpromotion()
    {
        if (Age > 30)

            cout << Name << " got promoted" << endl;
        else
            cout << Name << "sorry not promoted" << endl;
    }
};
int main()
{
    employee employee1 = employee("abhishek kumar", "creativeabhi13", 21);
    employee employee2 = employee("ashwani kumar", "creativeabhi13", 17);

    employee1.Askforpromotion();
    employee2.Askforpromotion();
}