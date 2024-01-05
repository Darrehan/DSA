/* nested recursion*/
#include<iostream>
using namespace std;
int fun(int x)
{
    if(x>100)
    {
        return x-10;
    }
    else
    {
        return fun(fun(x+11));
    }
}
int main()
{
    int x;
    cout<<"Enter the number buddy ";
    cin>>x;
    fun(x);
    cout<<fun(x);
    return 0;
}