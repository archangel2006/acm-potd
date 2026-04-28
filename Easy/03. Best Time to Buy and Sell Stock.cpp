// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;
        int min_buy = prices[0];

        for (int i=1; i<prices.size(); i++){

            profit = max(profit, prices[i] - min_buy);
            if (min_buy > prices[i]) min_buy = prices[i];

        }

        return profit;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        vector<int> dp(n,0);
        int min_price = prices[0];

        for (int i=1; i<prices.size(); i++){

            dp[i] = max(dp[i-1], prices[i] - min_price);

            min_price = min(min_price, prices[i]);

        }

        return dp[n-1];
    }
};