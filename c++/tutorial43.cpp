/* tail  recursion */
#include<iostream>
using namespace std;
void fun(int n)
{
if(n>0)
{
cout<<n<<"\n";// this statement will execute at calling time 
fun(n-1); 
}
}
int main()
{
int x;
x=6;
fun(x);
}