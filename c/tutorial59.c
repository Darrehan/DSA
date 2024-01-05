/* swaping of numbers*/
#include <stdio.h>
int main()
{
    int a, b, t;
    printf("Enter two numbers buddy \n");
    scanf("%d %d", &a, &b);
    printf("\nthe value of a is = %d  , \nthe value of b is = %d", a, b);
    t = a;
    a = b;
    b = t;
    printf("\nthe value of a is = %d  , \nthe value of b is = %d", a, b);
    return 0;
}
