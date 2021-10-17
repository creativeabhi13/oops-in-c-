/* LIST - doubly linked list list is a data structure basically it is implemented using pointer list is a container that supports constant time insertion and removal of elements from anywhere in the container.Fast random access is not supported.It is usually implemented as a doubly -
    linked list.Compared to std::forward_list this container provides bidirectional iteration capability while being less space efficient.

    Adding,
    removing and moving the elements within the list or across several lists does not invalidate the iterators or references.An iterator is invalidated only when the corresponding element is deleted.

                                                                                                                          forward list -singly linked list
                                                                                                                          forward_list is a container that supports fast insertion and
                                                                                                                      removal of elements from anywhere in the container.Fast random access is not supported.It is implemented as a singly - linked list.Compared to std::list this container provides more space efficient storage when bidirectional iteration is not needed.

                                                                                                                                                                                                                                             Adding,
    removing and moving the elements within the list, or across several lists, does not invalidate the iterators currently referring to other elements in the list.However, an iterator or reference referring to an element is invalidated when the corresponding element is removed(via erase_after) from the list. */

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    for (int i : l)
    {
        cout << i
             << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "size of list" << l.size() << endl;
    list<int> n(5, 100);
    for (int i : n)
    {
        cout << i
             << " ";
    }
}