#include<stdio.h>

void main(){
int n;
int a[100],b[100];
int i,j,r;
scanf("%d",&n);
scanf("%d",&r);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(j=0;j<r;j++){
for(i=0;i<n;i++){
  if(i==0){b[i]=a[n-1];}
  else
  b[i]=a[i-1];
}
for(i=0;i<n;i++)a[i]=b[i];
}
for(i=0;i<n;i++)printf("%d\n",a[i]);

}
