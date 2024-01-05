/* swaping of numbers using address variable or pointer*/
#include <stdio.h>
void swap(int *x, int *y); // funtion definition
int main()
{
    int a, b;
    printf("Enter two numbers buddy \n");
    scanf("%d %d", &a, &b);
    printf("\nthe value of a is = %d  , \nthe value of b is = %d", a, b);
    swap(&a, &b);
    printf("\nthe value of a is = %d  , \nthe value of b is = %d", a, b);
    return 0;
}
void swap(int *x, int *y) // funtion prototyping is a declarative statement in the calling program
{
    int t;
    t = *x;
    *x = *y; // funtion body
    *y = t;
}