#include<stdio.h>

int main(){

int n,i;
int sum=0,p;
p=2;
sum=sum+p;
scanf("%d",&n);
for(i=2;i<=n;i++){
  p=(p*3)/2;
  sum=sum+p;
}
printf("%d\n",sum);
  return 0;
}
