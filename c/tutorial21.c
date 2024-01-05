/* factorial of a number  using loops*/
#include <stdio.h>
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    f = f * i;
    return f;
}
int main()
{
    int x;
    printf("Enter the number buddy \n");
    scanf("%d",&x);
    fact(x);
    printf("%d\n",fact(x));
    return 0;
}
