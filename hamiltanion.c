#include<stdio.h>
#include<stdlib.h>

int main(){

int n,temp=-1;
int b[10000],l=0;
scanf("%d",&n);
int *a=(int *)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)scanf("%d",&a[i]);
for(int i=n-1;i>=0;i--){
  if(a[i]>=temp){b[l++]=a[i];temp=a[i];}
}
for(int i=l-1;i>=0;i--)printf("%d ",b[i]);
  return 0;
}
