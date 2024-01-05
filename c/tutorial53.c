//  to check whether a charecter is digit or Alphabit
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the charecter buddy \n");
    ch = getchar();
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        printf("Alphabit \n");
    else if (ch >= '0' && ch <= '9') // logical && operator must .
    {
        printf("Digit \n");
    }
    else
    {
        printf("Not Alphanumaric \n");
    }
    return 0;
}