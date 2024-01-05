/* taking input from user convert the following days in years,month,week,days*/
#include <stdio.h>
int main()
{
    int number, month, year, week, days;
    printf("Enter the number buddy \n");
    scanf("%d", &number);
    year = number / 365; // 1 year = 365 days
    month = number / 30; // 1 month = 30 days
    week = number / 7;   // 1 week = 7 days
    days = (number % 365) % 7;
    printf("\nthe value in year = %d", year);
    printf("\nthe value in month = %d", month);
    printf("\nthe value in week = %d", week);
    printf("\nthe value in days = %d", days);
    return 0;
}