/* power of a number using recursion*/
#include<iostream>
using namespace std;
int pow(int m,int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    return pow(m,n-1)*m;
}
int main()
{
    int m,n;
    cout<<"Enter the value of m ,n \n";
    cin>>m>>n;
    pow(m,n);
    cout<<pow(m,n);
    return 0;
}