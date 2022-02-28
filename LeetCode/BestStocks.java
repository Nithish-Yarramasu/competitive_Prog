// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time.
// However, you can buy it then immediately sell it on the same day.
// Find and return the maximum profit you can achieve.

/*https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/*/

class BestStocks {
    public int maxProfit(int[] prices) {
        int sum=0;
             
         for(int i =0;i<prices.length-1; i++){
             if(prices[i]-prices[i+1]<0)sum+=prices[i+1]-prices[i];
         }
         System.out.println(sum);
         return sum;
        
    }
}