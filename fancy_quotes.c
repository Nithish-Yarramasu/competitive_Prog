#include<stdio.h>
#include<string.h>




int main(){
//correct
int t;
char s[1001];
int c=0,c1=0;
scanf("%d\n",&t);
while(t--){
   c=0;c1=0;
   gets(s);
  for(int i=0;i<strlen(s);i++)
  {
    if(c==0&&s[i]=='n'||c==0&&s[i]=='N')c=1;
    else if(c==1&&s[i]=='o'||c==1&&s[i]=='O')c=2;
    else if(c==2&&s[i]=='t'||c==2&&s[i]=='T')c=3;
    else if(c==3&&s[i]==' ')c1=1;
    else if(s[i]==' ')c=0;
    else c=9;
  }
  if(c1==1||c==3)printf("Real Fancy\n");
  else printf("regular fancy\n");





}

  return 0;
}
