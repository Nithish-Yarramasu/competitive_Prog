#include<stdio.h>
int* add(int*,int*);
void main()
{
int   b1=4;
  int a1=6;


  printf("%d",add(&a1,&b1));
}
int * add(int *a,int *b)
{
  return (*a+*b);
}
