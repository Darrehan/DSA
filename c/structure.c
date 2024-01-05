/* structure basics */
#include <stdio.h>
struct rehan
{
    int length;
    int breadth; //structure ends with the semi colon ;
    char c;
};
int main()
{
    struct rehan r = {2, 3};
    printf("\nArea is  equal to %d", r.length * r.breadth); //Acessing structure members with the help of dot operator 
    printf("\nsizeof(r) %d", sizeof(r)); // inside struct padding of memory is done
    return 0;
}