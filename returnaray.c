#include<stdio.h>

int * arr(){
  int b[100],i;
  for(i=0;i<6;i++)scanf("%d",&b[i]);
  return *b;
}
void main(){
  int a[100],i;

int *a=arr();
for(i=0;i<6;i++)scanf("%d",a[i]);

}
