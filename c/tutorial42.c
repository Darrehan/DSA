/*quadratic equation problem*/
#include <stdio.h>
#include <math.h>
int main()
{
   float root_1, root_2, d, a, b, c;
   printf("\nquadratic equation =(-b+-sqrt(b*b-4*a*c))/(2*a) \n\n");
   printf("Enter value of a,b,c \n");
   scanf("%f %f %f", &a, &b, &c);
   d = b * b - 4 * a * c;
   if (d < 0)
   {
      printf("roots are imaginary \n");
   }
   else if (d == 0)
   {
      root_1 = (-b + sqrt(d)) / (2 * a);
      root_2 = (-b - sqrt(d)) / (2 * a);
      printf("discriminat = 0, the real and equal roots are %5.2f  %5.2f\n", root_1, root_2);
   }
   else if (d > 0)
   {
      root_1 = (-b + sqrt(d)) / (2 * a);
      root_2 = (-b - sqrt(d)) / (2 * a);
      printf("discriminat > 0, the real and unequal roots are %5.2f %5.2f\n", root_1, root_2);
   }
   else
   {
      printf("your input is wronge buddy \n");
   }
   return 0;
}