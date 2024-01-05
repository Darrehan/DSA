/* power of a number using recursion*/
#include<iostream>
using namespace std;
int pow(int m,int n)
{
    if (n==0)
    {
        return 1;
    }
    if(n%2==0)
    return pow(m*m,n/2);  // this is for even 
    else
    return m*pow(m*m,(n-1)/2); // this is for odd
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