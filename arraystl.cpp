/* What is an array ? An array is linear data structure in which we are storing data of same data type in contigious memory.basic array will be
                       syanta int array[4] = {1, 2, 3, 4};
stl(standard template library) array is implemented by basic array but the optimization and code length is very slow and easy to use ... */

#include <array>
#include <iostream>
using namespace std;
int main()
{
    //normal array

    int basic[3] = {1, 2, 3};
    for (int i = 0; i < 4; i++)
    {
        cout << basic[i] << endl;
    }
    // STANDARD TEMPLATE LIBRARY ARRAY
    cout << "the stl array are" << endl;
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd index is " << a.at(2) << endl;

    cout << "array is empty or not " << a.empty() << endl;

    cout << "Element at front is " << a.front() << endl;

    cout << "Element at back is " << a.back() << endl;
}