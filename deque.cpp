/* deque(double - ended queue) is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end.In addition, insertion and deletion at either end of a deque never invalidates pointers or references to the rest of the elements.

                                                                                                                                                                                                                                  As opposed to std::vector,
    the elements of a deque are not stored contiguously : typical implementations use a sequence of individually allocated fixed - size arrays, with additional bookkeeping, which means indexed access to deque must perform two pointer dereferences, compared to vector's indexed access which performs only one.

                                                                                                                                                                                                                                                        The storage of a deque is automatically expanded and contracted as needed.Expansion of a deque is cheaper than the expansion of a std::vector because it does not involve copying of the existing elements to a new memory location.On the other hand,
    deques typically have large minimal memory cost;
a deque holding just one element has to allocate its full internal array(e.g.8 times the object size on 64 - bit libstdc++; 16 times the object size or 4096 bytes, whichever is larger, on 64 - bit libc++).

a deque meaning insertion and deletion both can perform from front and back
we will implement this by using multiple fixed static array */

#include <deque>
#include <iostream>
using namespace std;
int main()
{
    // insertion from front and back
    deque<int> d;
    d.push_back(3);
    d.push_back(4);
    d.push_front(2);
    d.push_front(1);

    for (int i : d)
    {
        cout << i << " ";
    }
    // print the number at position
    cout << endl;
    cout << endl;
    cout << "Print First Index Element " << d.at(1) << endl;
    cout << "Print last Index Element " << d.at(3) << endl;

    cout << "front element  " << d.front() << endl;
    cout << "front element  " << d.back() << endl;

    cout << "Empty or not  " << d.empty() << endl;

    //deletion from front and back

    d.pop_back();
    cout << endl;
    for (int i : d)
    {
        cout << i << " ";
    }

    d.pop_front();
    cout << endl;
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << "before erase" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase" << endl;

    for (int i : d)
    {
        cout << i << endl;
    }
}
