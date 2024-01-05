/* taylor series using recursion */
#include<stdio.h>
double e(int x, int n)
{
    static double p=1,f=1; //initialise to static double
    double r;
    if(n==0)
    return 1;
    else
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}
int main()
{

    int x,n;
    printf("Enter the value of x and n buddy \n");
    scanf("%d %d",&x,&n);
    printf("%lf",e(x,n));
    return 0;
}