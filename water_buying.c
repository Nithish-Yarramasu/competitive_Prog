#include<stdio.h>



int main(){

long long  int t,a,b,n;
scanf("%lld",&t);
while(t--){
  scanf(" %lld %lld %lld",&n,&a,&b);
    if(2*a>b){
       if(n%2==0){printf("%lld\n",(n/2)*b);}
       else printf("%lld\n",(n/2)*b+a);
    }
    else{
      printf("%lld\n",n*a);
    }
}


  return 0;
}
