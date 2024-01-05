// sum of didgits of a number
#include<iostream>
using namespace std;
int main()
{
     unsigned int number,sum; // unsigned int is for increasing range of int 
    cout<<"Enter the number buddy \n";
    cin>>number;
    sum=0;
    while(number!=0)
    {
        sum=sum+(number%10);
        number=number/10;
    }
cout<<"the value is equal to = "<<sum<<"\n";
return 0;
}