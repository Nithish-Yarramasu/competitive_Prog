#include<stdio.h>

void main(){

  int a[100],n,low,high,mid,i,key;
  printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");

  for(i=0;i<n;i++)scanf("%d",&a[i]);
  printf("Enter the search element");scanf("%d",&key);
low=0;
high=n-1;
mid=(low+high)/2;

while(1){
  if(key>a[mid]){
    low=mid+1;mid=(low+high)/2;

}
else if(key<a[mid]){
  high=mid-1;mid=(low+high)/2;
}
else{
printf("Key found at position %d\n",mid+1);break;
}
}
}
