#include<stdio.h>



int main(){
  long long int n,m,max=-9999999999,min=9999999999,index1,index;
  long int a[200004],b[200004];
  scanf("%lld %lld",&n,&m);
  for(int i=0;i<n;i++){scanf("%ld",&a[i]);if(a[i]>max){max=a[i];index=i;}}
  for(int i=0;i<m;i++){scanf("%ld",&b[i]);if(b[i]<min){min=b[i];index1=i;}}
  printf("1st max=%d index=%d",max,index);
  printf("2nd min=%d index=%d",min,index1);


  return 0;
}
