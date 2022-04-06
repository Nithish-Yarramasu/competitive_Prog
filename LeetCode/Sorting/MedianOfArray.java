//https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int finalArr[] = new int[nums1.length+nums2.length];
        

        int p1=0;
        int p2=0;
        
       for(int i=0;i<=finalArr.length/2;i++){
           if(p1<nums1.length && p2<nums2.length)
           {
               if(nums1[p1]<=nums2[p2])
                   finalArr[i]=nums1[p1++];
               else
                   finalArr[i]=nums2[p2++];
                   
           }else if(p1==nums1.length){
               finalArr[i]=nums2[p2++];
           }else{
               finalArr[i]=nums1[p1++];
           }
       }
        
        
       if(finalArr.length%2!=0)
           return (double)finalArr[finalArr.length/2];
        else
            return (finalArr[finalArr.length/2]+finalArr[(finalArr.length/2)-1])/2.0;
            
    }
}