/* Arrays basic*/
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size of an array \n");
  scanf("%d", &n);
  int A[n];
  printf("Enter the Elements buddy \n");
  for (int i = 0; i <= n; i++)
  {
    scanf("%d", &A[i]);
  }
  for (int i = 0; i <= n; i++)
  {
    printf("\n%d", A[i]);
  }
  return 0;
}