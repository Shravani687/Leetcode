class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];
       
        int n=prices.size();
       for(int i=0;i<n;i++)
       {
        if(buy > prices[i])
        {
            buy = prices[i];
        }
        else if (prices[i]-buy > profit)
        {
            profit = prices[i] - buy;
        }
        

       }
       return profit;
      
    }
};