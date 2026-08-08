class Solution {
public:
    int f(int ind, int target, vector<int>& arr, vector<vector<int>>& dp) {
        if(target==0) return 1;
        if(ind==arr.size()) return 0;
        if(dp[ind][target]!=-1) return dp[ind][target];

        int take  = 0;
        if(arr[ind]<=target) take = f(ind, target-arr[ind], arr, dp);
        int leave = f(ind+1, target, arr, dp);
        return dp[ind][target]=take+leave;
    }
    
    int change(int amount, vector<int>& coins) {
        if(amount==0) return 1;
        vector<vector<int>> dp(coins.size(), vector<int>(amount+1, -1));
        return f(0, amount, coins, dp);
    }
};
