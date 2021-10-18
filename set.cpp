/* std::set
    C++ Containers library std::set
        Defined in header<set> template <
            class Key,
            class Compare = std::less<Key>,
            class Allocator = std::allocator<Key>>
        class set;
(1) namespace pmr
{
    template <class Key, class Compare = std::less<Key>>
    using set = std::set<Key, Compare, std::pmr::polymorphic_allocator<Key>>;
}
(2)(since C++ 17)
    std::set is an associative container that contains a sorted set of unique objects of type Key.Sorting is done using the key comparison function Compare.Search,
    removal, and insertion operations have logarithmic complexity.Sets are usually implemented as red - black trees.

                                                                                                        Everywhere the standard library uses the Compare requirements,
    uniqueness is determined by using the equivalence relation.In imprecise terms, two objects a and b are considered equivalent if neither compares less than the other : !comp(a, b) && !comp(b, a). */
#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << "-5 is present or not -> " << s.count(-5) << endl;
    cout << "5 is present or not -> " << s.count(5) << endl;
    cout << "6 is present or not -> " << s.count(6) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}