#include<stdio.h>

void main(){
  int i,j,a[6][6],max;
  int k,sum[4][4],c=0;

 for(i=0;i<6;i++)
 {
   for(j=0;j<6;j++)
   scanf("%d",&a[i][j]);
 }
 for(i=0;i<4;i++){
   for(j=0;j<4;j++){
     k=0;
     sum[i][j]=0;
     while(k<=2){
       sum[i][j]=sum[i][j]+a[i+k][j]+a[i+k][j+1]+a[i+k][j+2];
       k=k+2;
     }sum[i][j]=sum[i][j]+a[i+1][j+1];
   }
 }
max=sum[0][0];
 for(i=0;i<4;i++){
   for(j=0;j<4;j++){

     if(sum[i][j]>max){ max=sum[i][j];}
   }
 }
 printf("%d ",max);
}
