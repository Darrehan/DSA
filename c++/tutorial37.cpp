/*monolithic programing*/
#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "enter the length and breadth buddy\n ";
    cin >> length >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    cout << area << "\n"
         << perimeter << "\n";
    return 0;
}