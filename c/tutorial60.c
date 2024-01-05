/* prime number problem*/
#include <stdio.h>
int main ()
{
    int a, b,j; 
    printf("enter range \n \n");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b ; i ++)
    {
        for (  j = 2; j <=i; j++)
        {
            if (i % j == 0)
            {
                break; 
            } 
        }
        if (i == j )
        printf(" prime number = %d \n", i);
    }
    return 0;
}