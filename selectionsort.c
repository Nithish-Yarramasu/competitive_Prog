#include<stdio.h>


int main(){

  int a[100],n,min,temp,index;
  scanf("%d",&n);
  for(int i=0;i<n;i++)scanf("%d",&a[i]);

  for(int i=0;i<n-1;i++)
  {
      min=a[i];index=i;
    for(int j=i+1;j<n;j++){
      if(a[j]<min){min=a[j];index=j;}
    }a[index]=a[i];a[i]=min;
  }

  for(int i=0;i<n;i++)printf("%d ",a[i]);
}
