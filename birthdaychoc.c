#include<stdio.h>

int main(){
  long long int i,j,c=0,n,sum,a[100000],l,s;
  scanf("%lld",&n);
  for(i=0;i<n;i++)scanf("%lld",&a[i]);
  scanf("%lld %lld",&s,&l);
  for(i=0;i<=n-l;i++){
    sum=0;
    for(j=0;j<l;j++){
      sum=sum+a[i+j];
    }
    if(sum==s)c++;
  }
  printf("%lld",c);

  return 0;
}
