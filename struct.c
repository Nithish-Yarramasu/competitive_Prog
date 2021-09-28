#include<stdio.h>
struct emp{
  int age;
  int id;
}e[10];

void main()
{
  int i;
   for(i=0;i<10;i++){
  printf("%d entry",i);
  scanf("%d",&e[i].age);
  scanf("%d",&e[i].id);
  printf("%d\n",e[i].age);
  printf("%d\n",e[i].id);
}

}
