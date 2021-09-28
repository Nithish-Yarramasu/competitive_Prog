#include "stdio.h"
int* ptop(int);
void main()
{ int *p;
  int a;
  a=4;
*p=ptop(a);
  printf("%d",*p);
}

int * ptop(int a)
{
  int *b;
  b=&a;
  return *b;
}
