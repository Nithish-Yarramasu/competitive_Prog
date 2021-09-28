#include<stdio.h>
int main()
{
int a[10000];
int n,max,i,t,j,k;
scanf("%d",&t);

for(i=0;i<t;i++){
scanf("%d",&n);

for(j=0;j<n;j++){
scanf("%d",&a[j]);

}
max=a[0];
for(k=0;k<n;k++){
if(a[k]>max)max=a[k];
}
printf("%d\n",n-max);
}

return 0;
}
