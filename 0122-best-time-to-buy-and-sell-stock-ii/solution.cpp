class Solution {
public:
    int f(int ind, int holding, vector<int>& arr, vector<vector<int>>& dp){
        if(ind==arr.size()) return 0;
        if(dp[ind][holding]!=-1) return dp[ind][holding];

        int do_nothing = f(ind+1, holding, arr, dp);
        int do_something = 0;
        if(holding) do_something = arr[ind]+f(ind+1, 0, arr, dp);
        else do_something = -arr[ind]+f(ind+1, 1, arr, dp);

        return dp[ind][holding]=max(do_nothing, do_something);
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> dp(2, 0);
        for(int i=n-1; i>=0; i--){
            vector<int> next(2);
            for(int j=0; j<2; j++){
                int doNothing = dp[j];
                int doSomething = 0;
                if(j) doSomething = prices[i]+dp[0];
                else doSomething = -prices[i]+dp[1];
                next[j]=max(doNothing, doSomething);
            }
            dp=next;
        }
        return dp[0];
    }
};
