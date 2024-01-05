// practice
#include <iostream>
using namespace std;
int a = 2;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle rehan;
    rehan.length = 8;
    rehan.breadth = 6;
    cout << "the length is equal to =" << rehan.length << "\n";
    cout << "the breadth is equal to =" << rehan.breadth << "\n";
    cout << "the value of global variable is =" << ::a << "\n";
    /* using of type casting */
    float r = 45.7;
    int h = 88;
    cout << "the value of r =" << int(r) << "\n";
    cout << "the value of h =" << float(h) << "\n";
    cout << sizeof(struct rectangle) << "\n";
    /* using of refference variable*/
    int n = 7;
    int m = 89;
    int &c = m;
    cout << "the value of m is equal =" << m << "\n";
    cout << "the value of c is equal =" << c << "\n";
    /*char &t='\n';
    cout<<"the value of t is equal to ="<<t<<"\n";
    a non constant value refference can't be bound to a constant value
    */
    return 0;
}