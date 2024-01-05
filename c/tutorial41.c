// finding sum of digits of a number taking input from user
#include <stdio.h>
int main()
{
    unsigned int n, sum;
    printf("Enter the number buddy \n");
    scanf("%u", &n);
    sum = 0;
    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("the value of sum is = %u", sum);
    return 0;
}