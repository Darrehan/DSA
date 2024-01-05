// pattern in c++
#include <iostream>
using namespace std;
int main()
{
    int row, colum;
    cout << "Enter the number of rows buddy and colum also..\n";
    cin >> row >> colum;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= colum; j++)
        {
            if (i == 1 || i == row || j == 1 || j == colum)
            {
                cout << "*"; // no space after star
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}