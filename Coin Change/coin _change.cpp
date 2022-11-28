class Solution {
public:
    int coinChange(vector<int>& coins, int amount)
    {
        if (amount == 0)
            return 0;
        int n = coins.size();
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++)
        {
            for (auto& x : coins)
            {
                if (i >= x)
                    dp[i] = min(dp[i], 1 + dp[i - x]);
            }
        }
        return dp[amount] != amount + 1 ? dp[amount] : -1;
    }

    // I have this amount and I need to find fewest number of  coins that add up to amount value
    // Not a greedy problem
    // I need to use dp somehow to find the optimized solution

    // use recursion backtracking
    // every coin supply is infinite
    // in every recursion call I will traverse the whole arr of coin denominations
    // and I will select the ith coin then reduce coins[i] amount from the total amound
    // add 1 in count of total coins used then again call the recursive function for thes
    // updated values
// function (count, amount, int& minCoins, coins)
    // if (amount < 0)
        // return;
    // if (amount == 0)
        // minCoins = min(minCoins, count);
 
};