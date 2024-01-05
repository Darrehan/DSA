// Pattern in c++
#include <iostream>
using namespace std;
int main()
{
   int row, colum;
   cout << "Enter the number of row and colum buddy \n";
   cin >> row >> colum;
   for (int i = 0; i < row; i++) // outer loop is for range of row's
   {
      for (int j = 0; j < colum; j++) // inner loop is for  range of colum's and also for printing star
      {
         cout << "* ";
      }
      cout << "\n";
   }
   return 0;
}