// using of structures basic
#include <iostream>
using namespace std;
struct rectangle
{
  int length;
  int breadth; // basic syntax of structure
};
int main()
{
  struct rectangle r = {4, 5};
  r.length = 8; // we can also change the member element with the help of (.) operator
  r.breadth = 8;
  cout << "r.length = " << r.length << "\n"; // we can access the member element with the help of (.) operator
  cout << "r.breadth = " << r.breadth << "\n";
  cout << r.length * r.breadth << "\n";
  return 0;
}