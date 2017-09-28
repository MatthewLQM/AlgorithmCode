public class Solution {
    public int maxProfit(int[] prices) {
        int result = 0;
        if(prices.length == 0) return result;
        int min = prices[0];
       	for(int i = 1; i < prices.length; i++) {
            if(prices[i] > min) result += prices[i] - min;
            min = prices[i];
        }
        return result;
    }
}