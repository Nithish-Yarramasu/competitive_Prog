#include<stdio.h>

int main(){
  long long int n,i,j,k,c=0,a[100000];
  scanf("%lld %lld",&n,&k);
  for(i=0;i<n;i++)scanf("%lld",&a[i]);
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if((a[i]+a[j])%k==0)c++;
    }
  }
  printf("%d",c);
  return 0;
}
