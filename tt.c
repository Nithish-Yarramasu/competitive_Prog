#include<stdio.h>
#include<stdlib.h>

int main(){
long long int i,t,l,k,c;char a[100000];
  scanf("%lld",&t);
  for(k=0;k<t;k++){
  scanf("%s",&a);
  c=0;
  l=strlen(a);

  for(i=0;i<l-1;i++){

  if((int)a[i]<=(int)a[i+1])c++;}
if(c==l-1)printf("yes\n");else printf("no\n");
}
return 0;
}
