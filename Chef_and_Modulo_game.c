#include<stdio.h>


int main(){


long int t,n,p,k;
long int m=-1;
scanf("%ld",&t);
while(t--){
  m=-1;
scanf("%ld %ld",&n,&p);
if(p>n){
    if(n/2.0>n/2)m=n/2;
    else if(n/2.0==n/2)m=(n/2)-1;
  k=1;
  if(m==0){printf("%ld\n",p*p*p);}
  else{long int t1=(p-n)*(p-n)*k;
  long int t2=(p-n)*(k)*(p-m);
  long int t3=(k)*(p-m)*(p-m);
  printf("%ld\n",t1+t2+t3);
}

}



else if(p==n){
  if(n/2.0>n/2)m=n/2;
  else if(n/2.0==n/2)m=(n/2)-1;
  k=1;
  if(m!=0)printf("%ld\n",k*(p-m)*(p-m));
  else printf("%ld\n",p*p*p);

}
}

  return 0;
}
