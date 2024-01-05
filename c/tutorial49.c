/*pattern 6*/
#include <stdio.h>
int main()
{
  int row;
  printf("Enter the number of rows buddy \n");
  scanf("%d", &row);
  for (int i = 1; i<=row; i++) 
  {
    for (int j = 1; j <= row-i; j++) // inverse condition
    {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}