// how a funtion will return an array
#include <iostream>
using namespace std;
int *array(int n)
{
  int *p;
  p = new int[n]; // dynamic memory allocation in case of c we use p=(int*)malloc(size of(int));
  cout << "Enter the elment buddy \n";
  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << p[i] << "\n";
  }
  return p;
}
int main()
{
  int n;
  cout << "Enter the size of an array \n";
  cin >> n;
  int *a; // Array's are passed only by address
  a = array(n);
  return 0;
}