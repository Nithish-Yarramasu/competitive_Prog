#include <stdio.h>
#include<conio.h>


int power(int n1){
if(n1==1)return 2;
else if(n1==0)return 1;

else return 2*power(n1-1);

}


int main(){

int n,a[100],pre,check=0,max=0;

scanf("%d",&n);
for(int i=1;i<=n;i++)scanf("%d",&a[i]);
for(int i=1;i<power(n);i++){

  pre=0;
   if(check)max++;
  for(int j=0;j<n;j++){
    if(i&power(j)){
      if(pre==0)pre=a[j+1];
      else if(a[j+1]-pre<=1)check++;
      else check=0;
      pre=a[j+1];

    }
    else{

    }
  }
}
printf("%d",max);

  return 0;
}
