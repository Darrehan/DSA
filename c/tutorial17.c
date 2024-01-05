/*recursion sum of natural numbers*/
#include <stdio.h>
int fun(int n)
{ 
    if (n > 0)
    {  
        return fun(n - 1) + n;
    }
    return 0;
}
int main()
{ int x;
printf("enter the number buddy \n");
scanf("%d",&x);
printf("%d",fun(x));
return 0;
}