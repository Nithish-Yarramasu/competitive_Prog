#include<stdio.h>

long long int c[500004]={0};

int binary_search(long int low,long int nu,long int high){
 long int mid;
  if(high<low)return 0;
  mid=(low+high)/2;
  if(nu>c[mid])binary_search(mid+1,nu,high);
  else if(nu==c[mid])return 1;
  else if(nu<c[mid])binary_search(low,nu,mid-1);

}


int main(){

  long long int n,m,a[200003],b[200003],k=0,temp,tempo,index,f;
  scanf("%lld %lld",&n,&m);
  for(long int i=0;i<n;i++)scanf("%lld",&a[i]);
  for(long int i=0;i<m;i++)scanf("%lld",&b[i]);

  for(long int i=0;i<n;i++)
  { if(k>=n+m-1)break;
    for(long int j=0;j<m;j++){
      temp=a[i]+b[j];
                                                //printf("k=%d element=%d  found=%d \n",k,temp,binary_search(0,temp,k));
      if(binary_search(0,temp,k)!=1){
        printf("%ld %ld\n",i,j);
        if(k==0){c[0]=temp;k++;}
        else
         {
           long int p=0;
        while(temp>c[p]&&p<=k&&c[p]!=0){
          p++;
        }


           k++;
         for(long long int f=k;f>=p;f--){
           if(f==p)c[f]=temp;
           else c[f]=c[f-1];


         }




      }


    }
  }
}
  return 0;

}
