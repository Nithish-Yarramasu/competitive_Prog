#include<stdio.h>

//correct
int main(){

 long long int t,n,a,b,ali=0,bob=0,u=0,e;
 scanf("%lld",&t);
 while(t--){
   bob=0;ali=0;u=0;
   scanf("%lld %lld %lld",&n,&a,&b);
   for(long long int i=0;i<n;i++){
     scanf("%lld",&e);
      if(e%a==0)bob++;
      else if(e%b==0)ali++;
   }
   if(bob>ali)printf("BOB\n");
   else if(ali>=bob)printf("ALICE\n");

 }


  return 0;
}
