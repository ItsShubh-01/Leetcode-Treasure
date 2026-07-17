class Solution {
public:
    int f(int ind, int k, vector<int>& arr, vector<int>& dp){
        if(ind>=arr.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];

        int maxi=0;
        for(int i=1; i<=k; i++){
            int maxim = 0;
            for(int j=ind; j<ind+i && j<arr.size(); j++)
                maxim = max(maxim, arr[j]);
            maxi = max(maxi, maxim*(min(i, (int)arr.size()-ind)) + f(ind+i, k, arr, dp));
        }
        return dp[ind]=maxi;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n, -1);
        return f(0, k, arr, dp);
    }
};
