#include<stdio.h>

int main(){
  int a[100],b[100],n,m;
  int n1,c=0,i,k,j;
  n1=n+m;
printf("Enter the n and m value\n");
scanf("%d %d",&n,&m);
printf("Enter the a arraay\n");
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Enter the b arraay\n");
for(i=0;i<m;i++)scanf("%d",&b[i]);

for(i=a[0];i<b[m-1];i++){
c=0;
  for(j=0;j<n;j++){
    if(i%a[j]==0)c++;
  }
  for(k=0;k<m;k++){
    if(b[k]%i==0)c++;
  }
  if(c==n1)printf("%d ",i);
}
return 0;
}
