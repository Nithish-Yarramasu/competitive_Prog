  #include<stdio.h>

  long int poww( long int a,long int b){
    if(b==0)return 1;
    else{
      for(long int i=1;i<b;i++)a=a*2;
      return a;
    }
  }


  int main(){

  long int t,n;
  scanf("%ld",&t);

  while(t--){
    scanf("%ld",&n);
    double cyc=n/26.0;long int c;
    if(cyc>n/26)c=(n/26)+1;
    else c=n/26;
    long int temp=n%26;
    if(temp>=1&&temp<=2)printf("%ld %ld %ld\n",poww(2,c-1),0,0);
    else if(temp>=3&&temp<=10)printf("%ld %ld %ld\n",0,poww(2,c-1),0);
    else printf("%ld %ld %ld\n",0,0,poww(2,c-1));

  }



    return 0;
  }
