/* dynamic allocation of structure*/
#include <stdio.h>
#include <stdlib.h>
struct rehan
{
  int length;
  int breadth;
};
int main()
{
  struct rehan r = {5, 5};
  r.breadth = 2;
  r.length = 3;
  printf("\n Area is equal = %d", r.breadth * r.length);
  struct rehan *p;
  p = &r;
  (*p).breadth = 6;
  p->length = 9;
  printf("\n Area is equal = %d", (*p).breadth * p->length);
  struct rehan *q;
  q = (struct rehan *)malloc(sizeof(struct rehan));
  (*q).breadth = 9; // accessing structure member with the help of pointers
  q->length = 9;
  printf("\nArea is equal to = %d", (*q).breadth * q->length);
  free(q);
  printf("\nArea is equal to = %d", (*q).breadth * q->length);
  // it will print garbage value because dynamic allocation of structure is deleted
  return 0;
}