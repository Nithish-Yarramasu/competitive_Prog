#include<stdio.h>

int main(){

  int n,a[100],b[50],s,i,j,k=0,f,max;
  scanf("%d",&n);

scanf("%d",&f);
s=(n-f+1);
  for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<s;i++){
  b[i]=0;
  for(j=i;j<f+i;j++){
    if(a[j]==1)b[i]++;
  }

}

/*for(i=0;i<s;i++){
  printf("%d",b[i]);
}*/
max=b[0];
for(i=0;i<s;i++){
  if(b[i]>max)max=b[i];
}
printf("%d",max);




  return 0;
}
