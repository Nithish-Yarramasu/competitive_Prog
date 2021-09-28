#include<stdio.h>
#include<stdlib.h>


int main(){

int s,b,m,h,temp=0,c=0;
scanf("%d",&s);
for(int i=0;i<s;i++){
  c=0;temp=0;
  scanf("%d %d",&b,&m);
  for(int j=0;j<b;j++){scanf("%d",&h);if(h>temp){temp=h;c++;}}
  printf("%d",c*m);
}

  return 0;
}
