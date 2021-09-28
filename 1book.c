#include<stdio.h>

int main(){
  int pg,tp,i;
  int k=0,k1;
  scanf("%d %d",&tp,&pg);
  n=tp;
  if(pg==tp||pg==1)k1=0;
  if((pg-1)%2==0)k=(pg-1)/2;

  else if((pg-1)%2!=0)k=((pg-1)/2)+1;

if(tp%2==0&&k1!=0){
    for(i=0;i<n/2;i++){
      tp=tp-2;

      if(pg>=tp){k1++;break;}

    }
}

else if((tp%2)!=0&&tp-pg!=1&&k1!=0){
  for(i=0;i<tn/2;i++){
    if(pg>=tp){break;}
    tp=tp-3;
    k1++;


  }
}
  else if(tp-pg==1)k1=0;


  if(k<=k1)printf("%d\n",k);
  else if(k1<k)printf("%d\n",k1);
  return 0;
}
