#include<stdio.h>



int main(){

long int n,m;
long int a[1000005],b[1000005],c[1000005];
long int max=0,pre_max=0,max_ind,difer,pre_max_ind;
scanf("%ld %ld",&n,&m);
for(int i=1;i<=n;i++){ scanf("%ld",&a[i]);}
for(int i=1;i<=n;i++){ scanf("%ld",&b[i]);c[i]=a[i]*b[i];}
 for(int i=1;i<=n;i++){
    if(c[i]>max){max=c[i];max_ind=i;}

  }
while(m>0){
  pre_max=0;


  for(int i=1;i<=n;i++){
    if(i!=max_ind&&c[i]>pre_max){pre_max=c[i];pre_max_ind=i;}

  }
 // printf("%d %d",pre_max,max);
    int temp=(max-pre_max)/b[max_ind];
    double diff=(double)(max-pre_max)/b[max_ind];
    if(diff>=0&&diff<1)difer=1;
    else if(diff>temp)difer=temp+1;
    else difer=temp;
    if(difer>=m){difer=m;c[max_ind]=c[max_ind]-(m*b[max_ind]);m=0;}
    else {
      m=m-difer;
      c[max_ind]=c[max_ind]-(difer*b[max_ind]);
    }
    max=pre_max;max_ind=pre_max_ind;
    //printf("m val=%d %d\n",m,c[max_ind]);
  }
  long int yo=0;
  for(int i=1;i<=n;i++){

      if(c[i]>yo)yo=c[i];

  }
  printf("%d",yo);








  return 0;
}
