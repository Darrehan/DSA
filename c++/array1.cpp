// using of pointer in an array
#include <iostream>
using namespace std;
int main()
{
   int A[] = {1, 3, 4, 5, 6, 7, 8, 9, 2};
   int *p;
   p = A; // Here we  did't use ampersend (&) to the A , we can not use it in case of arrays
   // or we can use p=&A[0];
   for (int i = 0; i <= 8; i++)
      cout << p[i] << "\n";
   p = new int[9]; // dynamic memory allocation
   p[0] = 1;
   p[1] = 2;
   p[2] = 3;
   p[3] = 4;
   p[4] = 5;
   p[5] = 6;
   for (int i = 0; i <= 8; i++)
   {
      cout << "the value is = " << p[i] << "\n";
   }
   delete[] p; // in case variable we put variable name for arrrays we use []
   cout << "the value is = " << p[0] << "\n";
   // using of refrence variable
   int a = 5;
   int &r = a;
   r++;
   cout << a << "\n";
   cout << r << "\n";
   return 0; // whenever we are using memory dynamically we must release it or finsh
}