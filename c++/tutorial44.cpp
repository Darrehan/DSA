/********************head recursion***********************************/
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {   fun(n-1); // head recursion 
        cout<<n<<"\n"; // this statement will execute after returning time 
    }
}
int main()
{
    int x;
    x=6;
    fun(x);
    return 0;
}