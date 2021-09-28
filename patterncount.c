#include<stdio.h>
#include<string.h>

void main(){
  char a[10000];
  int t,i,j,one,zero,cyc;
  scanf("%d",&t);
for(j=0;j<t;j++)
{
  cyc=0;one=0;zero=0;
  scanf("%s",&a);
  for(i=0;i<strlen(a);i++){
    if((a[i]=='1'&&one==0)||(a[i]=='1'&&zero!=0&&one==1))one++;
    else if(a[i]=='0'&&one==1)zero++;
    else if(a[i]=='0'&&a[i-1]=='1'&&i!=0){one++;zero++;}
    else {one=0;zero=0;}
    if(one==2){cyc++;one=0;zero=0;}

  }
  printf("%d\n",cyc);
}
}
