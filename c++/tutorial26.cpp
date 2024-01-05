// practice
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    i = 400 * 400 / 400;
    cout << i;
    char c;
    for (c = 0; c < 256; c++) /* infinte because when it will cross the range it will again start from begning*/
        cout << c << "\n";
    return 0;
}
