/* upper to lower */
#include <stdio.h>
#include <ctype.h> // library for these funtions
int main()
{
    char ch;
    printf("Enter charecter buddy \n");
    ch = getchar();
    if (isupper(ch))
        putchar(tolower(ch));
    else if (islower(ch))
        putchar(toupper(ch));
    else
    {
        printf("Not Alphanumaric \n");
    }
    return 0;
}