#include<stdio.h>




int main(){

int n,q,n1;
int a[10000],b[10000],c[10000],temp[100000],temp1;
char c1;
scanf("%d %d",&n,&q);
for(int i=1;i<n;i++){
  scanf("%d %d",&a[i],&b[i]);
  scanf(" %c",&c1);
  if(c1=='L')c[i]=1;else c[i]=0;

}

int k=0;
for(int i=1;i<=q;i++){
  scanf("%d",&n1);k=0;
  while(n1!=1){
  for(int j=1;j<n;j++){
    if(b[j]==n1){ temp[++k]=!c[j];n1=a[j];break; }
  }
}

  temp1=1;
int j;  int count=0;
  for(int m=k;m>0;m--){

    for(j=1;j<n;j++){
      if(a[j]==temp1&&c[j]==temp[m]){temp1=b[j];break;}
    }
  if(j==n){count=1;break;}
  }
  if(count)printf("-1\n");else printf("%d\n",temp1);

}





  return 0;
}
