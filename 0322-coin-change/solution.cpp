class Solution {
public:
    int f(int ind, int tgt, vector<int>& arr, vector<vector<int>>& dp) {
        if(tgt==0) return 0;
        if(ind==-1) return 1e9;
        if(dp[ind][tgt]!=-1) return dp[ind][tgt];

        int take=1e9;
        if(arr[ind]<=tgt) take=1+f(ind, tgt-arr[ind], arr, dp);
        int leave = f(ind-1, tgt, arr, dp);
        return dp[ind][tgt]=min(take, leave);
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        vector<vector<int>> dp(coins.size(), vector<int>(amount+1, -1));
        int ans = f(coins.size()-1, amount, coins, dp);
        return ans>=1e9? -1:ans;
    }
};
