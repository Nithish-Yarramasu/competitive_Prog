#include<stdio.h>

int main(){
long int a[100000],b[100000],i,j,min,n,c=0;

  scanf("%ld",&n);
  for(i=0;i<n;i++)scanf("%ld",&a[i]);
  for(i=0;i<n;i++){
    b[i]=999999;
    for(j=i+1;j<n;j++){
      if(a[i]==a[j]&&i>j){b[i]=i-j;c++;break;}
      else if(a[i]==a[j]&&i<j){b[i]=j-i;c++;break;}


    }
  }
  min=b[0];
  for(i=0;i<n;i++){

    if(b[i]<min)min=b[i];
  }
  if(c==0)printf("%d",-1);
  else printf("%ld\n",min);
  return 0;
}
