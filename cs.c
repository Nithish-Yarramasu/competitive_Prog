#include<stdio.h>
#include<string.h>


void rotate(int a[],int size);
void findmax(int a[],int size,int frame,int seq);


int main(){
  int a[100000],f;
  char  q;
  int n,u,i,s,ql;
  //printf("Enter the nvalue frame no_of queries \n");
  scanf("%d %d %d",&n,&f,&ql);
  s=(n-f+1);
  //printf("Enter the elements of array\n");
  for(i=0;i<n;i++)scanf("%d",&a[i]);


//printf("Enter the quer\n");
for(i=0;i<ql;i++){
  scanf(" %c",&q);
  if(q=='!')rotate(a,n);
  else if(q=='?')findmax(a,n,f,s);

}


  return 0;
}

void findmax(int a[],int n,int f,int s){
  int i,max,j;
  int b[1000000];

for(i=0;i<s;i++){
  b[i]=0;
  for(j=i;j<f+i;j++){
    if(a[j]==1)b[i]++;
  }

}

max=b[0];
for(i=0;i<s;i++){
  if(b[i]>max)max=b[i];
}
printf("%d\n",max);
}

void rotate(int a[],int n){
int i,j,c[100000];
  for(i=0;i<n;i++){
    if(i==0){c[i]=a[n-1];}
    else
    c[i]=a[i-1];
  }
  for(i=0;i<n;i++)a[i]=c[i];
}
