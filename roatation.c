#include<stdio.h>
#include<stdlib.h>

int main(){

  long int n,d;
  scanf("%ld %ld",&n,&d);
  int *a=(int *)malloc(sizeof(int)*n);
  for(int i=0;i<n;i++)scanf("%d",&a[i]);
  long int r=d%n;
  for(int i=r;i<n;i++)printf("%d ",a[i]);
  for(int i=0;i<r;i++)printf("%d ",a[i]);


  return 0;
}
