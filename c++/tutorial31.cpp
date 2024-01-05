/* structure as a parameter pass by call by address*/
#include<iostream>
using namespace std;
struct rectangle
{
int length;
int breadth;
};
void fun(struct rectangle *r1) // here r1 is not same as r its diffrent object created inside stack
{
(*r1).breadth=3; // now it will chage the actual parameter's
r1->length=3;
cout<<"value from funtion \n";
cout<<"length = "<<r1->length<<"\n"<<"breadth = "<<(*r1).breadth<<"\n";
}
int main()
{
    struct rectangle r={4,4};
    cout<<"length = "<<r.length<<"\n"<<"breadth = "<<r.breadth<<"\n";
    fun(&r);
    cout<<"actual parameters are changed \n";
    cout<<"length = "<<r.length<<"\n"<<"breadth = "<<r.breadth<<"\n";
    return 0;
}