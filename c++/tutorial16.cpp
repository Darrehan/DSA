// Multiplication table
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number you want multiplication table buddy \n";
    cin >> n;
    cout << "multiplication table of " << n << "\n";
    for (int i = 0; i <= 20; i++)
    {
        cout << n << "*" << i << "=" << n * i << "\n";
    }
    return 0;
}