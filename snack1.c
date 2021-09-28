#include<stdio.h>

int main(){

char s[100];
int l,t,eq=0,i,j,k,br;
scanf("%d",&t);
for(i=0;i<t;i++){
  scanf("%d",&l);
  eq=0;br=0;
  for(j=0;j<l;j++)scanf(" %c",&s[j]);
  for(k=0;k<l;k++){
    if(s[k]=='H'&&eq==0)eq++;
    else if(s[k]=='T'&&eq==1)eq--;
    else if(s[k]=='.'){continue;}
    else {printf("Invalid\n");br++;break;}

  }
  if(eq==0&&br==0)printf("Valid\n");else if(br==0) printf("Invalid\n");
}


  return 0;
}
