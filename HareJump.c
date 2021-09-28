#include<stdio.h>
//Not completed
long int n,k,a[100000],r[100000]={0};

int find_ways(int n){

if(n<0)return 0;
else if(n==0)return 1;
else if(r[n]!=0)return r[n];
else {
  for(int i=0;i<k;i++){
    r[n]+=find_ways(n-a[i]);
  }
return r[n];
}


}

int main(){

long int t;
scanf("%ld",&t);
while(t--){
scanf("%ld",&n);
scanf("%d",&k);
for(int i=0;i<k;i++)scanf("%d",&a[i]);
printf("%d\n",find_ways(n));


}





  return 0;
}
