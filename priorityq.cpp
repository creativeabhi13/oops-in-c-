/* priority q - we have made a queue in such a way that first element is always greater element as by default.
by default q is always be max heap.

a heap is said to be max heap when we try to fetch data and it always give greater then max heap.
if it is min always fetch min element/. 
std::priority_queue
 C++ Containers library std::priority_queue 
Defined in header <queue>
template<
    class T,
    class Container = std::vector<T>,
    class Compare = std::less<typename Container::value_type>
> class priority_queue;
A priority queue is a container adaptor that provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction.

A user-provided Compare can be supplied to change the ordering, e.g. using std::greater<T> would cause the smallest element to appear as the top().

Working with a priority_queue is similar to managing a heap in some random access container, with the benefit of not being able to accidentally invalidate the heap.

*/

#include <iostream>
#include <queue>

using namespace std;
int main()
{
    //max heap
    priority_queue<int> maxi;

    //min - heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout << "size-> " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "khaali h kya bhai  ?? -> " << mini.empty() << endl;
}
