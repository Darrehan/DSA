/* fabonnaci using recursion*/
#include<stdio.h>
int fab(int n)
{
    if(n<=1)
    return n;
    else 
    return fab(n-2)+fab(n-1);
}
int main()
{
    int n;
    printf("Enter the number buddy \n");
    scanf("%d",&n);
    printf("%d \n",fab(n));
    return 0;
}