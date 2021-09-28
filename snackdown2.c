#include<stdio.h>

int check(int a[],int n)
{
  int c=0,i;

  if(a[0]&&a[n-1]==1&&n%2!=0)
  {
    for(i=n/2;i>0;i--)
    {
      if(a[i]-a[i-1]==1)c++;
    }
    for(i=n/2;i<n-1;i++)
    {
      if(a[i]-a[i+1]==1)c++;
    }
    if(c==n-1)printf("yes\n");
    else
     printf("no\n");
  }
  else
  printf("no\n");


}

int main(){

int t,n,a[100000],i,j;
scanf("%d",&t);
for(i=0;i,i<t;i++){
  scanf("%d",&n);
  for(j=0;j<n;j++)scanf("%d",&a[j]);
  check(a,n);
}

  return 0;

}
