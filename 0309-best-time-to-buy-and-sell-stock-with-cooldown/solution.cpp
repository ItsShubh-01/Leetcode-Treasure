class Solution {
public:
    int f(int ind, int holding, vector<int>& arr, vector<vector<int>>& dp){
        if(ind>=arr.size()) return 0;
        if(dp[ind][holding]!=-1) return dp[ind][holding];

        int do_nothing = f(ind+1, holding, arr, dp);
        int do_something = 0;
        if(holding) do_something = arr[ind]+f(ind+2, 0, arr, dp);
        else do_something = -arr[ind]+f(ind+1, 1, arr, dp);

        return dp[ind][holding]=max(do_nothing, do_something);
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(), vector<int>(2, -1));
        return f(0, 0, prices, dp);
    }
};
