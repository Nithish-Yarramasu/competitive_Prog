#include<stdio.h>

int main()
{
  long long int a[100],q[100];
  long long int min,max,n,q1,i;
  scanf("%lld %lld",&n,&q1);
  for(i=0;i<n;i++)scanf("%lld",&a[i]);
  for(i=0;i<q1;i++)scanf("%lld",&q[i]);

  min=a[0];
  max=a[0];
  for(i=0;i<n;i++){
    if(a[i]<min)min=a[i];
    else if(a[i]>max)max=a[i];
  }
  for(i=0;i<q1;i++){
    if(q[i]>=min&&q[i]<=max)printf("Yes\n");
    else printf("No\n");
  }


return 0;
}
