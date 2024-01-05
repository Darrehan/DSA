/* power of number */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int m,n,r;
     printf("Enter the value of m ,n \n");
     scanf("%d %d",&m,&n);
      r=pow(m,n);
    printf("%d",r);
    return 0;
}