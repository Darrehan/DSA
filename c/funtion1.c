/* how a funtion will return pointer to a structure*/
#include<stdio.h>
#include<stdlib.h>
struct rectangle{
    int length;
    int breadth;
};
struct rectangle* fun()
{
    struct rectangle *q;
    q=(struct rectangle*)malloc(sizeof(struct rectangle)); // dynamic allocation of structure in heap
    (*q).length=0;
    q->breadth=4;
     return q;
}
int main()
{
    struct rectangle *p; // we access with (*p).   ,  p->
    p=fun();
    printf("%d\n%d ",(*p).length,p->breadth);  //accessing structure element's with the help of pointer because its returning pointer to a structure 
    return 0;
}