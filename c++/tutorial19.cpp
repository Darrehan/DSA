// pattern in c++ pyramid
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows you want pyramid buddy \n";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}