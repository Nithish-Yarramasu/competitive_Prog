#include<stdio.h>

int main(){

long long int sum,f,k,j,q,i,x,y,t;
scanf("%lld",&t);
for(j=0;j<t;j++){
scanf("%lld %lld",&x,&y);
k=x+y+1;
sum=0;q=0;
for(i=0;i<=x;i++){
  if(i!=x){sum=sum+k-i;i=x-1;}
  if(i==x){q=q+y;break;}

}
f=sum-x;
sum=sum*(sum+1)/2;
q=q*(q+1)/2;
f=f*(f+1)/2;
printf("%lld\n",sum-f+q+1);
}

  return 0;

}
