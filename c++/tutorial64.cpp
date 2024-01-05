/* ncr using recursion  */
#include<iostream>
using namespace std;
int nCr(int n,int r)
{
    if(r==0||n==r)
    return 1;
    else
    return (nCr(n-1,r-1)+nCr(n-1,r)); //must include parenthesis
}
int main()
{
    int n,r;
    cout<<"Enter the value of n and r \n";
    cin>>n>>r;
    cout<<nCr(n,r)<<"\n";
    return 0;
}