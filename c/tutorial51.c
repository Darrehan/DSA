/* leap year problem */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number buddy \n");
    scanf("%d", &n);
    if (n % 400 == 0 && n % 100 != 0 || n % 4 == 0)
    {
        printf("leap year \n");
    }
    else
    {
        printf(" not a leap year \n");
    }
    return 0;
}