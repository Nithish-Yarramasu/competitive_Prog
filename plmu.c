#include<stdio.h>

int main(){

 long long int t,n,nu,sum=0,sum1=0;

 scanf("%lld",&t);
 while(t--){
   sum=0;
   scanf("%lld",&n);
   for(int i=0;i<n;i++){
     scanf("%lld",&nu);
     if(nu==2)sum++;
     if(nu==0)sum1++;

   }
   sum--;
   sum1--;
   double d=(sum+1)/2.0;
   d=d*sum;
   double d1=(sum1+1)/2.0;
   d1=d1*sum1;
   printf("%lld\n",(long long int)(d+d1));
 }

  return 0;
}
