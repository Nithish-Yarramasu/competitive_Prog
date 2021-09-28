#include <stdio.h>
void main()
{
  int *a,*b;
  int b1=3;
  a=&b1;
  *b=*a;
  printf("%d",*b);
}
