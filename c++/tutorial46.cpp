/*recursion global variable varialble*/
#include <iostream>
using namespace std;
int q =0; // global variable
int fun(int n)
{
    if (n > 0)
    {   q++;
        return fun(n - 1) + q;
    }
    return 0;
}
int main()
{
    int x=5;
   cout<<fun(x)<<"\n";
    return 0;
}