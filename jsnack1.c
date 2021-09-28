#include<stdio.h>

int main(){
  long int t,i,n,c=0,j;
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%ld",&n);
    c=0;
    for(j=1;j<500;j++){
      if(c==n)break;
      if(j<=2&&c!=n){printf("%ld ",j);c++;}
      else if(j==3&&c!=n){
      j=j+1;
      printf("%ld ",j);
      c++;
    }
      else if(j>3&&c!=n) {
        j=j+2;
        c++;
      printf("%ld ",j);
    }
    }
    printf("\n");
  }
  return 0;
}
