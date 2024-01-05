/* tree recursion */
#include<stdio.h>
void fun(int n)
{
if(n>0)
{
printf("%d \n",n);// this statement will execute at calling time 
fun(n-1); 
fun(n-1); 
}
}
int main()
{
int x;
x=3;
fun(x);
}
