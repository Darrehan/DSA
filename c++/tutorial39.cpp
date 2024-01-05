/*class*/
#include <iostream>
using namespace std;
class rectangle
{
public:
    int length; // members of class are private by default;
    int breadth;
    initialize(int l, int b) // this is not constructure here just funtion for initializing l,b;
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    changelength(int l)
    {
        length = l;
    }
};
int main()
{
    int l, b;
    rectangle r;
    cout << "Enter the number buddy \n";
    cin >> l >> b;
    r.initialize(l, b); // in class without constructure we can't directly initialise it
    cout << "Length = " << r.length << "\n"
         << "Breadth = " << r.breadth;
    cout << "\n";
    r.area();
    cout << "Area = " << r.area() << "\n";
    r.perimeter();
    cout << "Perimeter = " << r.perimeter() << "\n";
    r.changelength(20);
    cout << "Length = " << r.length << "\n";
    cout << "breadth = " << r.breadth << "\n";
    cout << "Area = " << r.area() << "\n";
    cout << "Perimeter = " << r.perimeter() << "\n";
    return 0;
}