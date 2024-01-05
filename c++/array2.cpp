// array as parameter (how do we pass array as parameter)
#include <iostream>
using namespace std;
void array(int *A, int n) // A[]
{
  cout << "Enter the Element's buddy \n";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++)
    cout << A[i] << "\n";
}
int main()
{
  int n;
  cout << "Enter the size of an array \n";
  cin >> n;
  int A[n];
  array(A, n);
  return 0;
}