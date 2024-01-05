/* fabonacci series using loops */
#include<iostream>
using namespace std;
 unsigned int fab(int n)
{    int s,first=0,second=1;
    if(n<=1)
    return n;
   else
    for(int i=2;i<=n;i++)
    {
        s=first+second;
        first=second;
        second=s;
        cout<<s<<"\n";
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter the number buddy \n";
    cin>>n;
    cout<<fab(n)<<"\n";
    return 0;
}