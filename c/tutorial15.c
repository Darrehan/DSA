/*recursion static variable*/
#include <stdio.h>
int fun(int n)
{  static int q =0; // we must need to include static for declaring it static 
    if (n > 0)
    {   q++;
        return fun(n - 1) + q;
    }
    return 0;
}
int main()
{
    int x=5;
   printf("%d\n",fun(x));// when we call same funtion in first call value of q is 5,in second call value of q is 10,15
   printf("%d\n",fun(x));
   printf("%d\n",fun(x));
    return 0;
}