/*recursion*/
#include <iostream>
using namespace std;
int fun(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    return 0;
}
int main()
{
    int x;
    x = 5;
   cout<<fun(x)<<"\n";
    return 0;
}