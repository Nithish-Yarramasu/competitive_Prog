#include<stdio.h>

int main(){

int n,k,i,j,t,c[100],l[100],co=0,a[100][100];

scanf("%d",&t);
for(k=0;k<t;k++){
  scanf("%d",&n);
for(i=0;i<n;i++){
  for(j=0;j<n;j++)scanf("%d",&a[i][j]);
}

for(i=0;i<n;i++){
  l[i]=0;
  for(j=0;j<n;j++)l[i]=l[i]+a[i][j];
}

for(i=0;i<n;i++){
  c[i]=0;
  for(j=n;j>=0;j--)c[i]=c[i]+a[j][i];
}
co=0;
for(i=0;i<n;i++){

  for(j=0;j<n;j++){
    if(c[i]==l[j]&&l[j]!=999999){
      l[j]=999999;
      co++;
    }
  }
}
if(co==n)printf("possible\n");
else printf("Impossible\n");
}
  return 0;
}
