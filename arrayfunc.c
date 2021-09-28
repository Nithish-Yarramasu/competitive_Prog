#include <stdio.h>

void arrsum(int[],int);
void main()
{
  int a[6]={1,2,3,4,5,6};
  arrsum(a,6);
}

void arrsum(int a[],int n)
{int i;
  int sum=0;
for(i=0;i<n;i++)
{
  sum=sum+a[i];
}
printf("%d",sum);

}
