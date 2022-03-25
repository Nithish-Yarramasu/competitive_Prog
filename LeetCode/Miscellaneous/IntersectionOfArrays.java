/*DEF

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

*/

/*
Constraints

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000

*/

class IntersectionOfArrays {
    public int[] intersect(int[] nums1, int[] nums2) {   
       Arrays.sort(nums1);
       Arrays.sort(nums2);
       int j=0,i=0,k=0;
         
       int fa[]= new int[1001];
         
         
        while(true)
        {
         if(i>=nums1.length || j>=nums2.length)break;
             if(nums1[i]<nums2[j]){
               i++;  
             }
             else if(nums1[i]==nums2[j]){
                 fa[k++]=nums1[i];
                 i++;j++;

             }
             else{
                 j++;
             }
        }
        
        int faa[] = new int[k];

      return java.util.Arrays.copyOfRange(fa, 0, k) ;
        
    
}
}