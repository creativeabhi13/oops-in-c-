/* stack - stack is data structure which work on the fashion called lifo - last in first out.tack class is a container adapter that gives the programmer the functionality of a stack - specifically, a LIFO(last - in, first - out) data structure.

                                                                                                                                                                                                       The class template acts as a wrapper to the underlying container
                                                                                                                                                                                                       - only a specific set of functions is provided.The stack pushes and pops the element from the back of the underlying container,
    known as the top of the stack. */

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Mr.");
    s.push("Abhishek");
    s.push("Kumar");
    cout << "Top Element" << s.top() << endl;
    s.pop();
    cout << endl;
    cout << "Top Element"
         << " " << s.top() << endl;
    cout << "The Size of stack is "
         << " " << s.size() << endl;
    cout << "empty or not" << s.empty() << endl;
}