#include<stdio.h>

int main(){
long int t,n,c,m,sum=0,k,sumo,i,p,q;

scanf("%ld",&t);

for(i=0;i<t;i++){
  sum=0;
scanf("%ld %ld %ld",&n,&c,&m);
k=n/c;sumo=k;
while(k>=m){
  p=k/m;
  sum=sum+p;
  q=k%m;
  k=p+q;
}
printf("%ld\n",sum+sumo);


}

  return 0;
}
