/* taylor series using horner's rule */
#include<stdio.h>
double e(int x, int n)
{
    static double s=1;
    if (n==0)
    return s;
    s= 1+x*s/n;
    return e(x,n-1);
}
int main()
{
    int x,n;
    printf("Enter the value of x and n \n");
    scanf("%d %d",&x,&n);
    printf("%lf",e(x,n));
    return 0;
}