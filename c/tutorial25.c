/* ncr using recursion  */
#include<stdio.h>
int nCr(int n,int r)
{
    if(r==0||n==r)
    return 1;
    else
    return (nCr(n-1,r-1)+nCr(n-1,r)); //must include parenthesis
}
int main()
{
    int n,r;
    printf("Enter the value of n and r \n");
    scanf("%d %d",&n,&r);
    printf("%d \n",nCr(n,r));
    return 0;
}