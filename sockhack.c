#include<stdio.h>

int main(){

int n,a[100000];
int i,j,c=0,c1=0;;
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&a[i]);

for(i=0;i<n;i++){
c=0;
  for(j=i+1;j<n;j++){
    if(a[i]!=NULL&&a[i]==a[j]&&a[j]!=NULL){

      a[j]==NULL;
      c++;
    }
  }
    if((c+1)%2==0)c1++;
    a[i]==NULL;
  }
printf("%d\n",c1);

  return 0;
}
