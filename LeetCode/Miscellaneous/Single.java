/* DEF
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space
*/

/* Constraints
 1 <= nums.length <= 3 * 104
 -3 * 104 <= nums[i] <= 3 * 104
 Each element in the array appears twice except for one element which appears only once.
*/



class Single {
    public int singleNumber(int[] nums) {
        
        Arrays.sort(nums);
        
        for(int i=0;i<nums.length-1;i+=2){
           if(nums[i]!=nums[i+1])return nums[i];
            
        }
        
        
        if(nums.length>1)
        return nums[nums.length-1];
        else return nums[0];
        
    }
}