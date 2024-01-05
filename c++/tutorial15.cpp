// smallest,largest and average value
#include <iostream>
using namespace std;
int main()
{
  int range;
  float number, average, sum, min, max;
  min = INT16_MAX;
  max = INT16_MIN;
  sum = 0;
  cout << "Enter range buddy \n";
  cin >> range;
  for (int i = 0; i < range; i++)
  {
    cout << "Enter your number buddy \n";
    cin >> number;
    if (number > max)
      max = number;
    if (number < min)
      min = number; // lader if statements
    sum = sum + number;
  }
  average = sum / range;
  cout << "smallest = " << min << "\n";
  cout << "largest = " << max << "\n";
  cout << "average = " << average << "\n";
  return 0;
}