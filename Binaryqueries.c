#include<stdio.h>
#include<stdlib.h>


int main(){

int n,q;
scanf("%d %d",&n,&q);
int *a=(int *)malloc(sizeof(int)*(n+1));
for(int i=1;i<=n;i++)scanf("%d",&a[i]);
int t,x,l,r;
for(int i=1;i<=q;i++){
  scanf("%d",&t);
  if(t==1){
    scanf("%d",&x);a[x]=!a[x];
  }
  else{
    scanf("%d %d",&l,&r);
    if(a[r]==1)printf("ODD\n");
    else printf("EVEN\n");
  }
}



  return 0;
}
