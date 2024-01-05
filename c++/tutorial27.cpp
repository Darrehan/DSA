// prime number problem
#include <iostream>
using namespace std;
int main()
{
    int a, b, j, i;
    cout << "Enter the range buddy you want to check prime number's \n";
    cin >> a >> b;
    for (i = a; i <= b; i++) // thie loop will go for a to b
    {
        for (j = 2; j < i; j++) // this loop will check whether a number is prime or not
        {
            if ((i % j) == 0) // check which no is to be in denominator
            {
                break;
            }
        }
        if (j == i) // when loop is finished
        {
            cout << "Prime number = " << i << "\n";
        }
    }
    return 0;
}