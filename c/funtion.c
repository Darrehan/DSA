/* how a funtion will return an array*/
#include <stdio.h>
#include <stdlib.h>
int *array(int n); // funtion definition ,we can also use [],instead of *
int main()
{
    int n;
    printf("Enter the size of an array \n");
    scanf("%d", &n);
    int *a;
    a = array(n); // it will create a static object inside the stack
    return 0;
}
int *array(int n) // we can also use [],
{
    int *p;
    p = (int *)malloc(sizeof(int)); // dynamic allocation of an array
    printf("Enter the elements buddy \n");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d", p[i]);
    }
    return p;
}