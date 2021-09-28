#include<stdio.h>

int main(){
int i,n,t,c=0;
scanf("%d",&t);
for(i=0;i<t;i++){
  c=0;
  scanf("%d",&n);
  while(n>0){
    if(n%10==4)c++;
    n=n/10;
  }
  printf("%d\n",c);
}


  return 0;
}
