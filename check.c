#include<stdio.h>
#include<stdlib.h>
#include "string.h"

int main(){
  char c[10],d[10];
   int v[2],k=1,j;
  char a[30],b[3];

  scanf("%s",&a);
  for(j=0;j<2;j++){
  c[0]=a[j+k-1];
  d[0]=a[j+k];
  strcat(c,d);
  printf("%s %d\n",c,j);
  v[j]=atoi(c);
  printf("%d\n",v[j]);
  k+2;
}





return 0;


}
