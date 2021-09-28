#include<stdio.h>

int main(){

long long int n,es=0,os=0,a[200002],c=0;
scanf("%lld",&n);
for(int i=1;i<=n;i++){
  scanf("%lld",&a[i]);
  if(i%2==0)es+=a[i];
  else os+=a[i];
}
long long int on=0,en=0;
for(int i=1;i<=n;i++){
if(i%2!=0){

    if(en+os-a[i]==on+es)c++;
    on+=a[i];
    os-=a[i];

 }
 else{

   if(en+os==on+es-a[i])c++;
   es-=a[i];
   en+=a[i];

 }
}

printf("%lld",c);



  return 0;
}
