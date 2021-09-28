#include<stdio.h>

/* O(logN)*/

int main(){

int n,x;
int result=1;
scanf("%d %d",&n,&x);

while(x>0)
{
if(x%2!=0)result=result*n;
n=n*n;
  x/=2;


}
printf("%d",result);

  return 0;
}
