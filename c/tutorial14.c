/******************************* head recursion ***************************************************/
#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {   fun(n-1);
        printf("%d\n",n); // this statement will execute at returning time 
    }
}
int main()
{
    int x ;
    x=6;
    fun(x);
    return 0;    
}