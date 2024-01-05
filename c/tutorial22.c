/* factorial of a number using recursion */
#include<stdio.h>
int fact(int x)
{
    if (x==0)
    {
        return 1;
    }
    else
    {
      return fact(x-1)*x; // this will execute after returning time
    }
}
int main()
{
    int x;
    printf("Enter the number buddy\n");
    scanf("%d",&x);
    fact(x);
    printf("%d",fact(x));
    return 0;
}