#include<stdio.h>

void check(long int a[],long int k,long int n){
  long int i,j,co=0,c;
  for(i=a[0];i<=a[k-1];i++){
    c=0;
    for(j=0;j<k;j++){
      if(j<n&&i%a[j]==0)c++;
      else if(j>=n&&a[j]%i==0)c++;
      else break;
      if(c==k){co++;}
    }
  }
  printf("%d\n",co);
}
int main(){
  long int k,n,m,i,a[100000];
scanf("%ld %ld",&n,&m);
k=m+n;
for(i=0;i<k;i++)scanf("%ld",&a[i]);
check(a,k,n);
  return 0;

}
