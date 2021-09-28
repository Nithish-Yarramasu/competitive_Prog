#include<stdio.h>

int main(){

  int n,a[100];
  int i,max,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  max=a[0];
  for(i=0;i<n;i++){
    if(a[i]>max)
      max=a[i];
    }
    for(i=0;i<n;i++){
      if(a[i]==max)c++;
    }

    printf("%d\n",c);
  return 0;
}
