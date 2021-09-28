#include<stdio.h>
#include<string.h>

void main()
{
char a[100000];
   int l,n,i,j,r,c;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%s",&a);
   l=strlen(a);
  for(j=0;j<l;j++)
    {
    if(a[j]=='x'){
       r=i;
       c=j;
     }
}
}
printf("%d %d",r,c);
}
