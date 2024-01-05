// pointer to a structure or creating object dynamically with the help of pionter
#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r;
    r.length = 1;
    r.breadth = 3;
    cout << "the area of rectangle is =" << r.length * r.breadth << "\n";
    struct rectangle *p;
    p = &r;
    (*p).length = 4; // we can also use this way to access the elements ...
    p->breadth = 6;
    cout << "the area of rectangle is =" << (*p).length * p->breadth << "\n";
    // creating object dynamically with the help of pointer
    struct rectangle *q;
    q = new struct rectangle; // in case of c we simply use p=(struct rectangle*)malloc(size of(struct rectangle));
    q->breadth = 8;
    q->length = 8;
    cout << "the area of rectangle is =" << q->breadth * q->length << "\n";
    return 0;
}