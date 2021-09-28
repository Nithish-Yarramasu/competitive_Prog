#include<stdio.h>

int main(){

  int n,e,q,l;
  int h[100000]={0};
  scanf("%d",&n);
  for(int i=0;i<n;i++){scanf("%d",&e);h[e]++;}
  scanf("%d",&q);
  for(int i=0;i<q;i++){
    scanf("%d",&l);
    if(h[l])printf("%d\n",h[l]);
    else printf("NOT PRESENT\n");
  }
  return 0;
}
