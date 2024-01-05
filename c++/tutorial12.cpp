// Finding the sum of n even numbers taking the input from user
#include <iostream>
using namespace std;
int main()
{
  int n, sum, i;
  cout << "Enter the range buddy \n";
  cin >> n;
  sum = 0;
  i = 0;
  for (int i = 1; i <= n; i++)
  {
    if ((i % 2) == 0)
    {
      sum = sum + i;
    }
  }
  cout << "the sum of even numbers is equal " << sum << "\n";
  return 0;
}
