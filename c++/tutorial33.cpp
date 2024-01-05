/* changing length by passing parameter in structure*/
#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

void changing_length(struct rectangle *r1, int l)
{
    r1->length = l;
    r1->breadth = 2;
}
int main()
{
    struct rectangle r = {4, 6};
    cout << r.length << "\n"
         << r.breadth << "\n";
    changing_length(&r, 0);
    cout << r.length << "\n"
         << r.breadth << "\n";
    return 0;
}