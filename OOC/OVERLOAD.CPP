#include <iostream>
using namespace std;
int l, b, area;
float r, area1;
class overload
{
public:
    /* int l, b, h;
    float r; */
    int area(int l, int b)
    {

        int area = l * b;
        return area;
    }
    float area(float r)
    {

        float area = 3.14 * r * r;
        return area;
    }
};
int main()
{

    overload overload1;
    cout << "enter  l and b" << endl;

    cin >> l >> b;
    area = overload1.area(l, b);
    cout << area << endl;

    cout << "enter radius " << endl;
    cin >> r;
    area1 = overload1.area(r);
    cout << area1;
}