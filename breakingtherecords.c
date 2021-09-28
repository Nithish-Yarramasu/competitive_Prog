#include<stdio.h>

int main(){
  long long int n,i,high,low,h=0,l=0,a[100000];
  scanf("%lld",&n);
  for(i=0;i<n;i++)scanf("%lld",&a[i]);
  high=a[0];low=a[0];
  for(i=0;i<n;i++){
    if(a[i]>high){high=a[i];h++;}
    else if(a[i]<low){low=a[i];l++;}
  }
  printf("%lld %lld\n",h,l);
  return 0;
}
