/* ncr using recursion*/
#include<stdio.h>
int fac(int n)
{
    if(n==0)
    return 1;
    else
    return fac(n-1)*n;
}
int ncr(int n,int r)
{ int num,deno;
num=fac(n);
deno=(fac(r)*fac(n-r));
 return num/deno;   
}
int main()
{    int n,r;
    printf("Enter the value of n and r \n");
    scanf("%d %d",&n,&r);
    printf("%d \n",ncr(n,r));
    return 0;
}