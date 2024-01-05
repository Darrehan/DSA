/* sales'mans salary ie, gross salary*/
#define Base_salary 1500.0
#define Bonus_Rate 200.0
#define COMMISION 0.02
#include <stdio.h>
int main()
{
    int quantity;
    float bonus, commision, gross_salary, price;
    printf("Enter the quantity and price :\n");
    scanf("%d  %f", &quantity, &price);
    bonus = quantity * Bonus_Rate;
    commision = COMMISION * quantity * price;
    gross_salary = Base_salary + bonus + commision; // remember this formula
    printf("bonus=%4.4f\ncommision=%4.4f\ngross_salary=%4.4f\nquantity=%2d\n", bonus, commision, gross_salary, quantity);
    return 0;
}