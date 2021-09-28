#include<stdio.h>

int a[100000],b[100000],n,m,x,temp;

void sumn(int sum,int index1,int index2){

          if(index1==n){if((index1+index2-1)>temp)temp=index1+index2-1;}
          else if(sum+a[index1]==x){if(index1+index2>temp){temp=index1+index2;}}
          else if(sum+a[index1]>x){if(index1+index2-1>temp){temp=index1+index2-1;} }
          else sumn(sum+a[index1],index1+1,index2);

          if(index2==m){if((index1+index2-1)>temp)temp=index1+index2-1;}
          else if(sum+b[index2]==x){if(index1+index2>temp){temp=index1+index2;}}
          else if(sum+b[index2]>x){if(index1+index2-1>temp){temp=index1+index2-1;}}
          else sumn(sum+b[index2],index1,index2+1);


}


int main(){

int t;
scanf("%d",&t);
while (t--) {
  temp=0;
  scanf("%d %d %d",&n,&m,&x);
  for(int i=0;i<n;i++)scanf("%d",&a[i]);
  for(int j=0;j<m;j++)scanf("%d",&b[j]);
  sumn(0,0,0);
  printf("%d\n",temp+1);
}




  return 0;
}
