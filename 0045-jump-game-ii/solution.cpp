class Solution {
public:
    int f(int ind, vector<int>& arr, vector<int>& dp) {
        if(ind==arr.size()-1) return 0;
        if(dp[ind]!=-1) return dp[ind];

        int mini=1e9;
        for(int i=1; i<=arr[ind] && ind+i<arr.size(); i++)
            mini = min(mini, 1+f(ind+i, arr, dp));
        return dp[ind]=mini;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return f(0, nums, dp);
    }
};
