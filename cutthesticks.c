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

void findnoofnonzer(int a[],int s);
int main(){

int a[100],n,i,j;
scanf("%d",&n);

for(i=0;i<n;i++)scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("%d\n",n);
for(i=0;i<n;i++){
  if(a[i]!=0){
  for(j=i+1;j<n;j++)
    a[j]=a[j]-a[i];
    a[i]=0;

findnoofnonzer(a,n);
}

}


  return 0;
}

void findnoofnonzer(int a[],int s){
int i,c=s;

for(i=0;i<s;i++){
  if(a[i]==0)c--;
}
if(c!=0)printf("%d\n",c);
}
