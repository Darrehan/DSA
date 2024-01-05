// creating two dimentional arrays
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}}; // double array inside the stack
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    int *c[4]; // array of an pointer
    c[0] = (int *)malloc(4 * sizeof(int));
    c[1] = (int *)malloc(4 * sizeof(int));
    c[2] = (int *)malloc(4 * sizeof(int));
    c[3] = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    int **b;                             // declaration of double pointer inside the stack
    b = (int **)malloc(4 * sizeof(int)); // array of an pointer
    b[0] = (int *)malloc(4 * sizeof(int));
    b[1] = (int *)malloc(4 * sizeof(int));
    b[2] = (int *)malloc(4 * sizeof(int));
    b[3] = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    // in case of array of an pointer and double pointer we get garbage value
    return 0;
}