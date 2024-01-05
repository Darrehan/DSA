/* pattern 4*/
#include <stdio.h>
int main()
{
  int row;
  printf("Enter the no of rows \n");
  scanf("%d", &row);
  for (int i = 0; i<= row; i++) 
  {
    for (int j = 0; j <= row-i; j++) // inverse condition
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}