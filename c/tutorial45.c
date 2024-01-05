// pattern 2
#include <stdio.h>
int main()
{
    int row, colum;
    printf("Enter the number of rows \n");
    scanf("%d %d", &row, &colum);
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= colum; j++)
        {
            if (i == 0 || i == row || j == 0 || j == colum)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}