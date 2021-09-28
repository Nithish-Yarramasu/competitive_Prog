#include<stdio.h>
#include<string.h>

int main(){

int max,i,j,n;
int a[100];
char c[100];
int k[100];
printf("Enter the height of each element\n");
for(i=0;i<26;i++)scanf("%d",&a[i]);
printf("Enter the characters\n");
scanf("%s",c);
n=strlen(c);
/*stores the ascivalues of entered characters*/
for(i=0;i<n;i++){
  k[i]=(int)c[i];
}
/*checks the above asci values with these and notes the height*/
for(i=0;i<26;i++){
  for(j=0;j<n;j++){
    if(i+97==k[j])k[j]=a[i];
  }
}
max=k[0];
for(i=0;i<n;i++){
  if(k[i]>max)max=k[i];
}
printf("%d\n",n*max);
  return 0;
}
