/* class constructer member funtion's*/
#include<iostream>
using namespace std;
class rectangle 
{
private:
int length;
int breadth;
public:
rectangle()
{
    length=0;
    breadth=0; // non-parameterised constructer it does't take any argument
}
rectangle(int l,int b); // parameterised constructer or we can say constructer overloading
area();
perimeter();// facilitators
int get_length()
{
    return length; //accesser
}
int get_breadth()
{
    return breadth;//accesser
}
void set_length(int l)
{
 length=l;
}
~rectangle() // it will automatically gets executed when other program gets executed fist no need to call
{
 cout<<"Distructer"<<"\n";
}
};
rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return 2*(length+breadth);
}
int main()
{
    rectangle r(4,4);
    cout<<"area = "<<r.area()<<"\n";
    cout<<"perimeter = "<<r.perimeter()<<"\n";
    cout<<" length = "<<r.get_length()<<"\n";
    cout<<" breadth = "<<r.get_breadth()<<"\n";
    r.set_length(6);
    cout<<"value after setting length\n";
    cout<<" length = "<<r.get_length()<<"\n";
    return 0;
}