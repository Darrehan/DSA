// Taking input from user to check whether a charecter is alphabit or digit usig getchar() funtion.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    ch = getchar(); // it will take single charecter value;
    if (isalpha(ch) > 0)
        cout << "Alphabit"
             << "\n";
    else if (isdigit(ch) > 0)
    {
        cout << "Digit"
             << "\n";
    }
    else
        cout << "Your charecter is not Alphanumaric";
    return 0;
}