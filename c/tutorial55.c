/* Alphabit or digit */
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter charecter buddy \n");
    ch = getchar();
    if (isalpha(ch) > 0)
    {
        printf("Alphabit\n");
    }
    else if (isdigit(ch) > 0)
    {
        printf("Digit\n");
    }
    else
    {
        printf("Not Alphanumaric\n");
    }
    return 0;
}