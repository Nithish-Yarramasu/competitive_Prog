#include<stdio.h>

void insertionSort(long int arr[], long int n)
{
    long int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){

long int n,w,arr[102],days=0;
long int sum=0;
scanf("%ld %ld",&n,&w);
for(int i=0;i<n;i++){scanf("%ld",&arr[i]);sum+=arr[i];}
   insertionSort(arr, n);


int extra=sum-w;
if(extra==0)printf("%ld ",n);
else if(extra>0){

int i=0;
while(w>0){
  int count=0;

   while(1){

    if(extra>=count&&arr[i]>count){
       w-=arr[i++]-count;
       extra-=count;
       count++;

    }
    else{
      days++;break;
    }


   }
}
printf("%ld",days);
}
else{
  printf("-1\n");
}


  return 0;
}
