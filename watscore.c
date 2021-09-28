#include<stdio.h>

int main(){

long int t,n,p,s,to=0;


scanf("%ld",&t);
while(t--){
  to=0;
  int p1[9]={0};
  scanf("%ld",&n);
  for(int i=0;i<n;i++){
    scanf("%ld %ld",&p,&s);
    if(p<9&&p1[p]<s){

      p1[p]=s;

    }
  }
  for(int i=1;i<=8;i++)
  to+=p1[p];
  printf("%ld\n",to);

}



  return 0;
}
