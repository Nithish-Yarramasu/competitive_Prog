#include<stdio.h>

/*CORRECT*/

int main(){

int t,p1,p2,k;
scanf("%d",&t);
while(t--){

scanf("%d %d %d",&p1,&p2,&k);
int temp=p1+p2;
int x=(temp)/k;

if(x%2==0)printf("CHEF\n");
else printf("COOK\n");

}


  return 0;
}
