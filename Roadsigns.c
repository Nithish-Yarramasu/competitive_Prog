#include<stdio.h>


long int exp(long int n,long int k){
  if(k==1)return n%1000000007;
  else {
    if(k%2==0)return (exp((n*n)%1000000007,k/2))%1000000007;
    else return ((n%1000000007)*exp((n*n)%1000000007,(k-1)/2)%1000000007);
  }
}

int main(){

  long int t,k;
  scanf("%ld",&t);
  while(t--){
    scanf("%ld",&k);
    printf("%ld\n",(exp(2,k)*5)%1000000007);
  }
}
