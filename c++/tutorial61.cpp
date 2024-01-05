/* fabonnaci using recursion*/
#include<iostream>
using namespace std;
int fab(int n)
{
    if(n<=1)
    return n;
    else 
    return fab(n-2)+fab(n-1); // every term in fabonnaci is obtained by adding previous term
}
int main()
{
    int n;
    cout<<"Enter the number buddy \n";
    cin>>n;
    cout<<fab(n)<<"\n";
    return 0;
}