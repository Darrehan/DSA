// pattern in c++ pyramid inverse
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number you want inverse pyramid buddy \n";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++) //  row-i > it will remove one row element in every loop turn
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}