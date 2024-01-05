/*structure and class*/
#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
void initialize(struct rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
void changelength(struct rectangle *r, int l)
{
    r->length = l;
}
void area(struct rectangle r)
{
    r.length = 2;
    r.breadth = 2;
    cout << r.breadth * r.length << "\n";
}
int main()
{
    struct rectangle r;
    initialize(&r, 10, 8);
    cout << r.breadth << "\n"
         << r.length << "\n";
    changelength(&r, 7);
    cout << r.breadth << "\n"
         << r.length << "\n";
    area(r);
    return 0;
}