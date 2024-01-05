/* factorial of a number  using loops*/
#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    f = f * i;
    return f;
}
int main()
{
    int x;
    cout << "Enter the number buddy you want factorial \n";
    cin >> x;
    fact(x);
    cout << fact(x);
    return 0;
}
