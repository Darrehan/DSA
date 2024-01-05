/*structure and class*/
#include <stdio.h>
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
int area(struct rectangle r)
{
    r.length=2;
    r.breadth=2;  
    printf("%d\n",r.breadth * r.length);
}
int main()
{
    struct rectangle r;
    initialize(&r, 10, 8);
    printf("%d\n%d\n", r.breadth, r.length);
    changelength(&r, 7);
    printf("%d\n%d\n", r.breadth, r.length);
    area(r);
    return 0;
}