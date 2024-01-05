/* structure as a parameter pass by call by value*/
#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
void fun(struct rectangle r1) // r1 is not same as r
{
    r1.breadth=8; // it will not change the actual parameter
    r1.length=8;
    printf("value from funtion\n");
    printf("length = %d breadth = %d \n",r1.length,r1.breadth);

}
int main()
{
    struct rectangle r={5,5};
    printf(" length = %d   breadth = %d \n",r.length,r.breadth);
    fun(r);
    printf("actual parameters are not changed \n");
    printf("length = %d    breadth = %d \n",r.length,r.breadth);
    return 0;
}