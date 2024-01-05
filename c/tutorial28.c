/* taylor series using horners rule by loop */
#include<stdio.h>
double e(int x,int n)
{
   double s;
    for(;n>0;n--)
    {
        s=1+x*s/n; // we need to type cast it before using it 
    }
   return s;
}
int main()
{
    int x,n;
    printf("enter the value of x and n \n");
    scanf("%d %d",&x,&n);
    printf("%lf",e(x,n));
    return 0;
}