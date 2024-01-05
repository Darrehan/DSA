/*Average of number*/
#include <stdio.h>
int main()
{
	int n,sum;
   float average;
	printf("enter the number buddy \n");
	scanf("%d",&n);
	sum=0;
	for(int i=0;i<=n;i++)
	{
    sum=sum+i;
	}
	average=sum/n;
	printf("%f",average);
	return 0;
}