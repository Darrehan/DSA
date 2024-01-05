/*pattern 5*/
#include <stdio.h>
int main()
{
  int row;
  printf("Enter the number of rows buddy \n");
  scanf("%d", &row);
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}