class MergeSort{


	public static int[] mergesortThis(int l,int r,int[] a){
             
        if(l==r)return new int[]{a[l]};
        else{
        	int mid=(l+r)/2;
        	int[] l1=mergesortThis(l,mid,a);
        	int[] r1=mergesortThis(mid+1,r,a);
        	return merge(l1,r1);
        }
	}


	public static int[] merge(int a[],int b[]){

		int finalArr[] = new int[a.length+b.length];
		int p1=0;
		int p2=0;

		for(int i=0;i<finalArr.length;i++){
             
             if(p1<a.length&&p2<b.length)
             {
             	if(a[p1]<=b[p2])
             		finalArr[i]=a[p1++];
             	else
             		finalArr[i]=b[p2++];
             }else if(p1==a.length){
             	finalArr[i]=b[p2++];
             }else if(p2==b.length){
             	finalArr[i]=a[p1++];
             }
		}

		return finalArr;

	}


	public static void main(String args[]){

		int a[] = {9,1,2,3,5,6,7,7,5,4};

		int[] f=mergesortThis(0,a.length-1,a);

		for(int i:f)
			System.out.println(i);

	}
}