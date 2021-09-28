#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){

  char a[10];
  char b[10];
  int n,i,k=1,g=0;
  char c[10],d[10],e[10],f[10];
  scanf("%s",a);
  scanf("%s",b);
  n=strlen(a);
if(a[n-2]<b[n-2])printf("First\n");
else if(b[n-2]<a[n-2])printf("Second\n");
else{

  for(i=0;i<2;i++){
    c[0]=a[i+g];d[0]=a[i+k];strncat(c,d,1);printf("%s",c);
    e[0]=b[i+g];f[0]=b[i+k];strncat(e,f,1);
    if(c<e){printf("First\n");break;}
    else if(c>e){printf("Second\n");break;}
    g+=2;k+=2;
  }
}



}
