// practice
#include <iostream>
using namespace std;
int main()
{
    float a = 12.2;
    if (a == 12.2) /* it gets automatically converted into double  for making it float we
                    must need to include f */
    {
        cout << "equal";
    }
    else
    {
        cout << "not equal";
    }

    int i = 5;
    while (i)
    {
        switch (i)
        {
        default:
        case 4:
        case 5: /*break will terminate the loop program will do nothing*/
            break;
        case 1:
            continue;
        case 2:
        case 3:
            break;
        }
        i--;
    }
    return 0;
}