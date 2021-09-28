#include<stdio.h>

struct emp
{
  int d;
  struct emp *link;

}*e;


int create2()
{

e->d=10;

e->link=NULL;
printf("%d\n",10 );
return 0;
}

int main(){

  create2();
return 0;
}
