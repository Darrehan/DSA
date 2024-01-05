/* power of a number using recursion*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
double pow(double m,double n) // in case of c we need to include double
{
    if (n==0)
    return 1;
    else
    return pow(m,n-1)*m;
}
int main()
{
    int m,n;
    double r;
    printf("Enter the value of m ,n \n");
    scanf("%d %d",&m,&n); // double in case of recursive funtion
    r=pow(m,n);
    printf("%.2lf",r);
    return 0;
}