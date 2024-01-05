//how do we increase the size of an array alternatively
#include<iostream>
using namespace std;
int main()
{
    int *p,*q;
    p=new int[5];
p[0]=0;
p[1]=1;
p[2]=3;
p[3]=4;
p[4]=5;
for(int j=0;j<5;j++)
{
    cout<<p[j]<<"\n";
    cout<<"\n";
}
q=new int[10];
for(int g=0;g<5;g++)
{
    q[g]=p[g];
}
delete[]p;
p=q;
q=NULL;//now q will not pointing towards array
   cout<<"\n";
for (int c= 0; c < 10; c++)
{
    cout<<p[c];
    cout<<"\n";
}
return 0;
}