/* indirect recursion */
#include<iostream>
using namespace std;
void funB(int x); // funtion prototyping
void funA(int x)
{    if(x>0)
{
    cout<<x<<"\n";
    funB(x-1);
}
}
void funB(int x)
{
    if(x>1)
    {
    cout<<x<<"\n";
    funA(x/2);  
    }
}
int main()
{
    int x;
    cout<<"enter the number buddy ";
    cin>>x;
    funA(x);
    return 0;
}