/* pointer basic*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    int A[n]; // it will create static object inside the stack
    printf("Enter the elements in array buddy\n");

    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("\n%d", A[i]);
    }
    int B[10];
    int *p;
    p = (int *)malloc(sizeof(int)); // dynamic allocation of an array inside the heap ,dynamic object
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    p[5] = 6;
    p[6] = 7;
    p[7] = 8;
    p[8] = 9;
    p[9] = 10;
    for (int i = 0; i <= 9; i++)
    {
        printf("\n value = %d", p[i]);
    }
    free(p);
    printf("\n%d ", p[8]); // it will print nothing ,it will not print garbage value because dynamic allocation of array is deleted;

    return 0;
}