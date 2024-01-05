// use of arrays basic
#include <iostream>
using namespace std;
int main()
{
  int A[] = {4, 5, 5, 7, 89, 0}; // here int is taking size 4 bytes that is why out put is 24,in some compilers it will take 2 bytes
  for (int i = 0; i <= 5; i++)
  {
    cout << "A=" << A[i] << "\n";
  }
  cout << "A[4]=" << A[4] << "\n";
  cout << "sizeof(A)=" << sizeof(A) << "\n";
  int b[] = {1, 2, 3, 5, 6, 7, 8, 9};
  for (int x : b) /* using of for each loop to get elements of an array*/
  {
    cout << "the value of b is=" << x << "\n";
  }
  return 0;
}

/*we can not initialise size of an arrays by taking input from the user although we can creat  it */
