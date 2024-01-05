/* changing length by passing parameter in structure*/
#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};

void changing_length(struct rectangle *r1,int l)
{
    r1->length=l;
    (*r1).breadth=2;
}
int main()
{
    struct rectangle r={4,6};
    printf("%d\n%d\n",r.breadth,r.length);
    changing_length(&r,0); 
    printf("%d\n%d\n",r.breadth,r.length);
    return 0;
}