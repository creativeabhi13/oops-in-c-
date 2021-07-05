// c++ program to demomstrate object and arrays //
#include <iostream>
using namespace std;
class student
{
private:
    char name[10];
    char usn[10];

public:
    void read();
    void display();
};
void student ::read()
{
    cin >> name >> usn;
}
void student ::display()
{
    cout << name << usn;
}
int main()
{
    student a[10];
    int n;
    cout << "enter the number of studnet" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the name and usn\n"
             << endl;
        a[i].read();
    }
    cout << "student details\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].display();
    }
}