// multiplicaion table problem
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number buddy \n");
    scanf("%d", &n);
    for (int i = 0; i <= 100; i++)
    {
        printf("\n %d * %d = %d ", n, i, n * i);
    }
    return 0;
}