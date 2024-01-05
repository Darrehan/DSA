/* class and constructure*/
#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    rectangle(int l, int b) // constructure it's job is initialise .or create new object
                            //  in that we are initializing class direct in main funtion this is possible because of constructure
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changelength(int l)
    {
        length = l;
    }
};
int main()
{
    rectangle r(4, 4); // here we are initialising directly. with out constructure we have to create a seperate funtion
    r.area();
    cout << r.area() << "\n";
    r.changelength(8);
    cout << r.length << "\n"
         << r.breadth << "\n";
    return 0;
}