//https://leetcode.com/problems/move-zeroes/

class MoveZeroes {
    public void moveZeroes(int[] nums) {
        int temp;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0) {
                for (int j = i + 1; j < nums.length; j++) {
                    if (nums[j] != 0) {
                        nums[i] = nums[j];
                        nums[j] = 0;
                        break;
                    }
                }
            }
        }

 
        
    }
}