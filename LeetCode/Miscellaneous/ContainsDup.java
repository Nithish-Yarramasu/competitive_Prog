/*LeetCode*/

/* 
Def : Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct
*/

/*Constraints

1 <= nums.length <= 105
-109 <= nums[i] <= 109

*/

class ContainsDup{
    public boolean containsDuplicate(int[] nums) {
        
        Arrays.sort(nums);
    
         for(int i =1 ;i<nums.length;i++)
             if(nums[i]==nums[i-1])return true;
        
        return false;
         
    }
}