#include<stdio.h>

int main(){

  long int n,a[5],b[10000],i,max,index;
  scanf("%ld",&n);
  a[0]=0;a[1]=0;a[2]=0;a[3]=0;a[4]=0;
  for(i=0;i<n;i++)scanf("%ld",&b[i]);
  for(i=0;i<n;i++){
    if(b[i]==1)a[0]++;
    else if(b[i]==2)a[1]++;
    else if(b[i]==3)a[2]++;
    else if(b[i]==4)a[3]++;
    else a[4]++;
    }
    max=a[0];
    for(i=0;i<5;i++){if(a[i]>max)max=a[i];}

    for(i=0;i<n;i++){
      if(a[i]==max){index=i;break;}
    }
    printf("%ld",index+1);


  return 0;
}
