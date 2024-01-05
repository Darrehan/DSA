/*recursion static varialble*/
#include <iostream>
using namespace std;
int fun(int n)
{  static int q =0; // we must need to include static for declaring it static 
    if (n > 0)
    {   q++;
        return fun(n - 1) + q;
    }
    return 0;
}
int main()
{  int x =5;
   cout<<fun(x)<<"\n";
    return 0;
}