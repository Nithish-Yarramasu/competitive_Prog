#include<stdio.h>
void quicksort(int a[100000],int first,int last){
   long int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(a[i]<=a[pivot]&&i<last)
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }

      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quicksort(a,first,j-1);
      quicksort(a,j+1,last);

   }
}

int  main()
{
  long int a[100000],n,i,m,h,k;
  long int c,d,swap,t,tt;
  scanf("%ld",&t);

  for(m=0;m<t;m++){
  scanf("%ld",&h);
    n=2*h;
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
  }

  quicksort(a,0,n-1);
k=n-(n/4+1);
printf("%ld\n",a[k]);



  for(i=0;i<n/2;i++){
    printf("%ld %ld ",a[i],a[i+n/2]);
  }

printf("\n");
}
return 0;
}
