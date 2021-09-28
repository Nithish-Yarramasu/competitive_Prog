#include<stdio.h>
//Not completed
long int c=0,a[10000],n;

long int find_ways(long int n1){
    if(n1==0){c++;return 0;}
    else if(n1<0)return 0;
    for(int i=0;i<n;i++){
        find_ways(n1-a[i]);
    }
    return 0;
}

int main(){

   long int s;
      scanf("%ld",&s);
     scanf("%ld",&n);
     for(int i=0;i<n;i++)scanf("%ld",&a[i]);
     find_ways(s);
     printf("%d\n",c);


}
