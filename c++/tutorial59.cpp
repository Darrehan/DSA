/* taylor series by  using lopps */
#include<iostream>
using namespace std;
double e(int x,int n)
{
     double r=1;
     double p=1,f=1;
     for(int i=1;i<=n;i++)
     {
     p=p*x;
     f=f*i;
     r= r+p/f;
     }
     return r;
}
int main()
{
    int x,n;
    cout<<"enter the number buddy \n";
    cin>>x>>n;
    cout<<e(x,n);
    return 0;
}