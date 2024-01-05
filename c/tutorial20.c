/* nested recursion*/
#include<stdio.h>
int fun(int x)
{
    if(x>100)
    {
        return x-10;
    }
    else
    {
        return fun(fun(x+11));
    }
}
int main()
{
    int x;
    printf("Enter the number buddy \n");
    scanf("%d",&x);
    fun(x);
    printf("%d",fun(x));
    return 0;
}