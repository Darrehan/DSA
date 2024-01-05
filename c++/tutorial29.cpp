// upper to lower charecter
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter charecter buddy \n";
    ch=getchar();
    if(islower(ch))
    putchar(toupper(ch));
    else if (isupper(ch))
    putchar(tolower(ch));
    else
    cout<<"Your input is not Alphabit \n";
    return 0;
}