#include<stdio.h>

int main()
{
  int h,td;
  int a[100000];
  int i,m,n,j,min;
//  printf("Enter the lenght of highway,number of testcases\n");
  scanf("%d %d",&h,&td);
//  printf("Enter the length of each segement\n");
  for(i=0;i<h;i++)scanf("%d",&a[i]);
//  printf("Enter the entereing segement and exit segement\n");
  for(i=0;i<td;i++){
    scanf("%d %d",&m,&n);
    min=a[m];
    for(j=m;j<=n;j++){
      if(a[j]<min)min=a[j];
    }
    printf("%d\n",min);
  }

  return 0;
}
