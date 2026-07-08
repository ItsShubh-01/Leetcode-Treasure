class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        arr.push_back(1);
        for(int& i:nums) arr.push_back(i);
        arr.push_back(1);

        vector<vector<int>> dp(arr.size(), vector<int>(arr.size(), 0));
        for(int i=n; i>0; i--){
            for(int j=i; j<=n; j++){
                int maxi=0;
                for(int ind=i; ind<=j; ind++){
                    int cost = arr[i-1]*arr[ind]*arr[j+1] + dp[i][ind-1] + dp[ind+1][j];
                    maxi = max(maxi, cost);
                }
                dp[i][j]=maxi;
            }
        }
        return dp[1][n];
    }
};
