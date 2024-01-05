// pattern problem 1
#include <stdio.h>
int main()
{
    int row, colum;
    printf("Enter the number of row and colum \n");
    scanf("%d %d", &row, &colum);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}