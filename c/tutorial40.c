// temperature conversion problem
#include <stdio.h>
int main()
{
  float fahrenheit, celsius;
  char ch;
  printf("Enter c for celsius conversion or Enter F for fahrenheit conversion\n");
  scanf("%c", &ch);
  switch (ch)
  {
  case 'f':
    printf("Enter fahrenheit value buddy \n");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("the vale in celsius is %f ", celsius);
    break;
  case 'c':
    printf("Enter celsius value buddy \n");
    scanf("%f", &celsius);
    fahrenheit = ((celsius * 9.0) / 5.0) + 32.0;
    printf("the vale in fahrenheit is %f ", fahrenheit);
    break;
  default:
    printf("your input is wronge try again \n");
    break;
  }
  return 0;
}