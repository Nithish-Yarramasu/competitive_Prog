#include<stdio.h>

int main(){
  long int a[100000],b[100000],s,i,j,k=0,e=0,k1=0,k2,k3,k4=0,min;
  scanf("%lld",&s);
  for(i=0;i<s;i++)scanf("%ld",&a[i]);
  for(j=0;j<s;j++)scanf("%ld",&b[j]);

  min=a[0];
  for(i=0;i<s;i++){
    if(a[i]<min){min=a[i];k=i;

  }
}


  min=b[0];
  for(j=0;j<s;j++){
    if(b[j]<min){min=b[j];e=j;}
}


  if(k!=e)printf("%ld\n",a[k]+b[e]);
  else {
    k2=a[k],k3=b[e];
    a[k]=9999999;b[e]=9999999;
    /*finding next min of array 1*/
    min=a[0];
    for(i=0;i<s;i++){
      if(a[i]<min&&a[i]!=9999999){min=a[i];k1=i;

    }
  }
    /*finding next min of array 2*/
    min=b[0];
    for(j=0;j<s;j++){
      if(b[j]<min&&b[j]!=9999999){min=b[j];k4=j;

    }
  }

    if(k2+b[k4]<=a[k1]+k3)printf("%ld",k2+b[k4]);
    else printf("%ld\n",a[k1]+k3);
    }
  return 0;
}
