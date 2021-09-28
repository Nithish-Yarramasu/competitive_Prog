#include<stdio.h>

int main()
{
  long int b,w,x,y,c,max,min,t,i;
  scanf("%d",&t);
  for(i=0;i<t;i++){
  scanf("%ld %ld %ld %ld %ld",&b,&w,&x,&y,&c);
  if(x<y){
    min=x;
    max=y;
    if((max>(c+min))||(max==(c+min)))printf("%ld\n",((c+min)*w)+min*b);
    else if(max<c+min)printf("%ld\n",(max*w)+min*b);
  }
  else if((y<x)||(y==x)){
    min=y;max=x;
    if((max>(c+min))||(max==(c+min)))printf("%ld\n",(((c+min)*b)+(min*w)));
    else if(max<c+min)printf("%ld\n",(max*b)+min*w);
  }
}

    return 0;

}
