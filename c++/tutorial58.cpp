/* taylor series using horners rule by loop */
#include<iostream>
using namespace std;
double e(int x,int n)
{
   double s;
    for(;n>0;n--)
    {
        s=1+(double(x)/double(n))*s; // we need to type cast it before using it 
    }
   return s;
}
int main()
{
    int x,n;
    cout<<"enter the value of x and n \n";
    cin>>x>>n;
    cout<<e(x,n);
    return 0;
}