/* even sum */
#include <stdio.h>
int main()
{
	int n, sum;
	printf("Enter range \n");
	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
	}
	printf("sum = %d", sum);
	return 0;
}
