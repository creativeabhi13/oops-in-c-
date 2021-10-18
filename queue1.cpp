/* queue - it is linear data structure which work on the fashion called FIFO - first in first out eg - railway station counter - first come first serve.- airport boarding scene - security check etc.std::queue C++ Containers library std::queue Defined in header<queue> template <class T, class Container = std::deque<T>>
                                                                                                                                                                                class queue;
The std::queue class is a container adapter that gives the programmer the functionality of a queue - specifically, a FIFO(first - in, first - out) data structure.

                                                                                                                       The class template acts as a wrapper to the underlying container
                                                                                                                       - only a specific set of functions is provided.The queue pushes the elements on the back of the underlying container and pops them from the front. */

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("abhishek");
    q.push("kumar");
    q.push("singh");

    cout << "Size before pop"
         << " " << q.size() << endl;

    cout << "First Element " << q.front() << endl;
    q.pop();
    cout << "First Element " << q.front() << endl;

    cout << "Size after pop"
         << " " << q.size() << endl;
}
