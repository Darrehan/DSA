/* structure*/
#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth; // in c++ structure is same as class.but memebers of structures are public by default.
    // members of class are private by default .we can't initialise class directly.in case of structure we can.
    initialize(int l, int b)
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
    rectangle r;
    r.initialize(4, 4);
    cout << "length = " << r.length << "\n"
         << "breadth = " << r.breadth;
    cout << "\n";
    r.area();
    cout << "area = " << r.area() << "\n";
    r.perimeter();
    cout << "perimeter = " << r.perimeter() << "\n";
    r.changelength(20);
    cout << "length = " << r.length << "\n";
    cout << "breadth = " << r.breadth << "\n";
    cout << "area = " << r.area() << "\n";
    cout << "perimeter = " << r.perimeter() << "\n";
    return 0;
}