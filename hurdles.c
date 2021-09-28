#include<stdio.h>

int main(){
  int max,h[100];
int n,k,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)scanf("%d",&h[i]);
max=h[0];
  for(i=0;i<n;i++){
    if(h[i]>max)max=h[i];
  }
  if(max-k>0)printf("%d\n",max-k);
  else if(k-max>=0)printf("%d\n",0);

  return 0;
}
