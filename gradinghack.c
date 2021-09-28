#include<stdio.h>

int  main(){
int n;
int a[100];
int k,i;

scanf("%d",&n);

for(i=0;i<n;i++){
  scanf("%d\n",&a[i]);
  if(a[i]<38){printf("%d",a[i]);continue;}
  k=((a[i]/5)+1)*5;
  if(k-a[i]<3)printf("%d\n",k);
  else printf("%d\n",a[i]);
}
return 0;
}
