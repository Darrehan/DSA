/*how do we increase the size of an array alternatively*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 0;
    p[1] = 1;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    for (int j = 0; j < 5; j++)
    {
        printf("%d", p[j]);
        printf("\n");
    }
    q = (int *)malloc(10 * sizeof(int));
    for (int g = 0; g < 5; g++)
    {
        q[g] = p[g];
    }
    free(p);
    p = q;
    q = NULL; // now q will not pointing towards array
    printf("\n");
    for (int c = 0; c < 10; c++)
    {
        printf("%d", p[c]);
        printf("\n");
    }
    return 0;
}
