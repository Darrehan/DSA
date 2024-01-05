/* taylor series using horner's rule */
#include<iostream>
using namespace std;
double e(int x, int n)
{
    static double s=1;
    if (n==0)
    return s;
    s=1+(double (x)/double (n))*s;
    return e(x,n-1);
}
int main()
{
    int x,n;
    cout<<"Enter the value of x and n \n";
    cin>>x>>n;
    cout<<e(x,n);
    return 0;
}