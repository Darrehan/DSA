/*recursion global variable varialble*/
#include <stdio.h>
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
   printf("%d\n",fun(x));
   printf("%d\n",fun(x));
   printf("%d\n",fun(x));
    return 0;
}