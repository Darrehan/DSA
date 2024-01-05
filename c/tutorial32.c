/* fabonnaci by memoization of Excessive recursion */
#include <stdio.h>
#define max 100
int f[max]; // global to every funtion 
int fab(int n)
{
    if (n <= 1)
        {
        f[n] = n;
        return n;
        }
    else
    {
        if (f[n - 2] == -1)
        f[n - 2] = fab(n - 2);
        if (f[n - 1] == -1)
        f[n - 1] = fab(n - 1);
    return f[n - 2] + f[n - 1];
    }
}
int main()
{
    int n;
     for (int i = 0; i <= max; i++)
    {
        f[i] = -1;//because 0 is also a fabbonacci term
    }
    printf("Enter the number buddy \n");
    scanf("%d", &n);
    printf("%d", fab(n));
    return 0;
}