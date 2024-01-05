/* fabonacci series using loops */
#include<stdio.h>
 unsigned int fab(int n)
{    int first=0,second=1;
     unsigned int s;
    if(n<=1)
    return n;
   else
    for(int i=2;i<=n;i++)
    {
        s=first+second;
        first=second;
        second=s;
        printf("%d \n",s);
    }
    return s;
}
int main()
{
    int n;
    printf("Enter the number buddy \n");
    scanf("%d",&n);
    printf("%d",fab(n));
    return 0;
}