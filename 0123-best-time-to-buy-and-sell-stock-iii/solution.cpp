class Solution {
public:
    int f(int ind, int holding, int count, vector<int>& arr, vector<vector<vector<int>>>& dp){
        if(ind==arr.size() || count==2) return 0;
        if(dp[ind][holding][count]!=-1) return dp[ind][holding][count];

        int do_nothing = f(ind+1, holding, count, arr, dp);
        int do_something = 0;
        if(holding) do_something = arr[ind]+f(ind+1, 0, count+1, arr, dp);
        else do_something = -arr[ind]+f(ind+1, 1, count, arr, dp);

        return dp[ind][holding][count]=max(do_nothing, do_something);
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(), vector<vector<int>>(2, vector<int>(2, -1)));
        return f(0, 0, 0, prices, dp);
    }
};
