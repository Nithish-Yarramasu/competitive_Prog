/*LeetCode Problem : https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/  */

/*Problem Def : Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.*/

/*Function : The following function removes duplicates from the array by modifying the input array in-place without extra space*/

/*Result :Return k after placing the final result in the first k slots of nums*/


class Solution {
    public int removeDuplicates(int[] nums) {
        int k = 1;
        int j;
        int index = -1;
        for (int i = 0; i < nums.length - 1; i++) {
            for (j = i + 1; j < nums.length; j++) {
                if (nums[j] != nums[i]) {
                    index = j;
                    break;
                }
            }
            for (int m = index - 1; m > i; m--) {
                nums[m] = nums[index];

            }
        }

        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i + 1] != nums[i]) {
                k++;
            }
        }
        return k;
    }
}