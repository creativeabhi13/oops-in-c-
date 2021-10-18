/* map - it is a data structure where data is stored in the form of key value.key is unique element and it will point only one element.map is a sorted associative container that contains key - value pairs with unique keys.Keys are sorted by using the comparison function Compare.Search, removal, and insertion operations have logarithmic complexity.Maps are usually implemented as red - black trees.

                                                                                                                                                                                                                                                                                                                                                                                                Everywhere the standard library uses the Compare requirements,
    uniqueness is determined by using the equivalence relation.In imprecise terms, two objects a and b are considered equivalent(not unique) if neither compares less than the other : !comp(a, b) && !comp(b, a). */
#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "abhishek";
    m[13] = "kumar";
    m[2] = "maurya";

    m.insert({5, "bheem"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding -13 -> " << m.count(-13) << endl;

    // m.erase(13);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl
         << endl;

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}
