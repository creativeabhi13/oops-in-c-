/* vector in c++ -
    it is dynamic a dynamic array.vector is a sequence container that encapsulates dynamic size arrays.The storage of the vector is handled automatically,
    being expanded and contracted as needed.Vectors usually occupy more space than static arrays, because more memory is allocated to handle future growth.This way a vector does not need to reallocate each time an element is inserted, but only when the additional memory is exhausted.The total amount of allocated memory can be queried using capacity() function.Extra memory can be returned to the system via a call to shrink_to_fit().(since C++ 11) 
    
    suppose we have 4 element in  a vector array and we try to add more element in it.when we try to add more element,at that time vector array create automatically new array which is double of previous and copy the element from the old one and dump it old one..basically they increase their capacity in advance 
    capacity-how much element we can put in the array
    size-how much element are their in the array 
    */
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> a(5, 1);
    /* cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    } */
    vector<int> last(a);
    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }

    vector<int> v;
    cout << " capacity-> " << v.capacity() << endl;
    cout << " size-> " << v.size() << endl;

    v.push_back(1);
    cout << " capacity-> " << v.capacity() << endl;
    cout << " size-> " << v.size() << endl;

    v.push_back(2);
    cout << " capacity-> " << v.capacity() << endl;
    cout << " size-> " << v.size() << endl;

    v.push_back(3);
    cout << " capacity-> " << v.capacity() << endl;
    cout << " size-> " << v.size() << endl;

    v.push_back(4);
    cout << " capacity-> " << v.capacity() << endl;
    cout << " size-> " << v.size() << endl;

    cout << "Element at 2nd index " << v.at(2) << endl;

    cout << " front " << v.front() << endl;
    cout << " back " << v.back() << endl;

    cout << "Before Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "after Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear size->" << v.size() << endl;
    cout << "before clear capcaity->" << v.capacity() << endl;

    v.clear();
    cout << "after clear size->" << v.size() << endl;
    cout << "After clear capcaity->" << v.capacity() << endl;
}