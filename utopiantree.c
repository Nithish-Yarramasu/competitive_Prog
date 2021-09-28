#include<stdio.h>
void utopian(int c);

int main(){
int t;
int c,i;
scanf("%d",&t);
for(i=0;i<t;i++){
  scanf("%d",&c);
  utopian(c);
}
  return 0;
}

void utopian(int c){

  int h=1;
  int i;
  for(i=1;i<=c;i++){
    if(i%2!=0)h=h*2;
    else if(i%2==0)h=h+1;
  }
  printf("%d\n",h);
}
