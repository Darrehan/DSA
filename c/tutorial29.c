/* taylor series by  using lopps */
#include<stdio.h>
double e(int x,int n)
{
     double r=1;
     double p=1,f=1;
     for(int i=1;i<=n;i++)
     {
     p=p*x;
     f=f*i;
     r= r+p/f;
     }
     return r;
}
int main()
{
    int x,n;
    printf("enter the number buddy \n");
    scanf("%d %d",&x,&n);
    printf("%lfrt56",e(x,n));
    return 0;
}