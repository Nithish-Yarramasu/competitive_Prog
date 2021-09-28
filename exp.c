#include<stdio.h>

int main()
{

long int t,n,k,c=0,ec=0,oc=0,rq;
long int h[10000]={0};

scanf("%ld",&t);
while(t--)
{
	c=0;
	scanf("%ld %ld",n,k);
    ec=n/2;
    oc=n-ec;
    rq=n-k;

    if(rq>ec)
    {
    	c+=ec;
    for(int i=n;i>0;i--)
    {
    	if(i%2!=0&&c!=rq){c++;h[i]=-i;}
    	else if(i%2==0)h[i]=-i;
    	else h[i]=i;

    }

    }
    else
    {
    	for(int i=1;i<n;i++)
    	{
    		if(i%2==0&&c!=rq){c++;h[i]=-i;}
    		else h[i]=i;
    	}
    }	
  
   for(int i=1;i<n;i++)printf("%d\n",h[i]);

}

	return 0;
}