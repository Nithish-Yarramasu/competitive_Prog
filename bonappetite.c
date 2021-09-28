#include <stdio.h>

int main(){
long  int n,r;
  long int c[100];
  long int bill,sum=0,o,i;
  //printf("Enter the n and r value\n");
  scanf("%ld %ld",&n,&r);
//printf("Enter the cost array");
  for(i=0;i<n;i++)
  scanf("%ld",&c[i]);
  //printf("Enter the bill amt");
  scanf("%ld",&bill);
  for(i=0;i<n;i++){
    sum=sum+c[i];
  }
  sum=sum-c[r];
  sum=sum/2;
  if(sum==bill)//printf("Bon apitite\n");
  else printf("%ld\n",bill-sum);
return 0;
}
