//https://leetcode.com/problems/plus-one/

class PlusOne {
    public int[] plusOne(int[] digits) {
       int carry = 1;
        int[] result = new int[digits.length + 1];

        for (int i = digits.length - 1; i >= 0; i--) {
            if (digits[i] + carry <= 9) {
                digits[i] += carry;
                carry = 0;
            } else if (digits[i] + carry > 9) {
                digits[i] = 0;
                carry = 1;
            }

        }

        if (carry == 1) {
            System.arraycopy(digits, 1, result, 1, digits.length - 1);
            result[0] = 1;
            return result;
        } else {
            return digits;
        }
        
    }
}