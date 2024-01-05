// taking input from user to check the give input is vovel
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter the charecter buddy \n");
  ch = getchar();
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'O' || ch == 'o' || ch == 'u' || ch == 'U')
    {
      printf("vovel\n");
    }
    else
      printf("consonant \n");
  }
  else
    printf("your input is wronge budyy try again \n");
  return 0;
}