class Solution {
public:
    int f(int ind, vector<int> &arr, vector<int> &dp){
        if(ind>=arr.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];

        int take = arr[ind]+f(ind+2, arr, dp);
        int leave = f(ind+1, arr, dp);
        return dp[ind]=max(take, leave);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return f(0, nums, dp);
    }
};
