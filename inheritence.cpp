// inheritance example-it is nothing but
/* The capability of a class to derive properties and characteristics from another class is called Inheritance.Inheritance is one of the most important feature of Object Oriented Programming.Sub Class : The class that inherits properties from another class is called Sub class or Derived Class.Super Class : The class whose properties are inherited by sub class is called Base Class or Super class.The article is divided into following subtopics :

    Why and when to use inheritance
    ? Modes of Inheritance
          Types of Inheritance
              Why and when to use inheritance
    ?

    Consider a group of vehicles.You need to create classes for Bus,
    Car and Truck.The methods fuelAmount(), capacity(), applyBrakes() will be same for all of the three classes.If we create these classes avoiding inheritance then we have to write all of these functions in each of the three classes as shown in below figure
    :

    inheritance

        You can clearly see that above process results in duplication of same code 3 times.This increases the chances of error and data redundancy.To avoid this type of situation,
    inheritance is used.If we create a class Vehicle and write these three functions in it and inherit the rest of the classes from the vehicle class, then we can simply avoid the duplication of data and increase re - usability.Look at the below diagram in which the three classes are inherited from vehicle class
    :

    inheritance2

        Using inheritance,
    we have to write the functions only one time instead of three times as we have inherited rest of the three classes from base class(Vehicle).Implementing inheritance in C++
    : For creating a sub - class which is inherited from the base class we have to follow the below syntax.Syntax
    :

    class subclass_name
    : access_mode base_class_name
{
    //body of subclass
};
Here, subclass_name is the name of the sub class, access_mode is the mode in which you want to inherit this sub class for example: public, private etc. and base_class_name is the name of the base class from which you want to inherit the sub class. 
Note: A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares. */
#include <iostream>
using namespace std;
class sum
{
public:
    int sum1(int a, int b)
    {
        int c = a + b;

        cout << c << endl;
        return c;
    }
};

class child1 : public sum
{
public:
    int sum2(int d, int e, int f)
    {
        int c = d + e + f;

        cout << c << endl;
        return c;
    }
};
class child2 : public sum
{
public:
    int sum3(int d, int e, int f)
    {
        int c = d * e * f;

        cout << c << endl;
        return c;
    }
};
int main()
{

    child1 obj1;
    child2 obj11;
    obj1.sum1(3, 2);
    obj1.sum2(1, 2, 3);
    obj11.sum3(3, 4, 5);
    obj11.sum1(5, 4);
}