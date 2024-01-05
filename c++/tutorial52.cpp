/* factorial of a number using recursion */
#include<iostream>
using namespace std;
int fact(int x)
{
    if (x==0)
    {
        return 1;
    }
    else
    {
      return fact(x-1)*x; // this will execute after returning time
    }
}
int main()
{
    int x;
    cout<<"Enter the number buddy \n";
    cin>>x;
    fact(x);
    cout<<fact(x);
    return 0;
}