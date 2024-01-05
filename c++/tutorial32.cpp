/* how a funtion will return pointer to a structure*/
#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
struct rectangle* fun()
{
    struct rectangle *q;
    q=new rectangle; // dynamic allocation of structure in heap
    (*q).length=0;
    q->breadth=4;
     return q;
}
int main()
{
    struct rectangle *p;
    p=fun();
    cout<<(*p).length<<"\n"; // syco music lover
    cout<<p->breadth<<"\n";
    return 0;
}