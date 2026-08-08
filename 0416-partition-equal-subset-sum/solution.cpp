class Solution {
public:
    int f(int ind, int target, vector<int>& arr, vector<vector<int>>& dp) {
        if(target==0) return true;
        if(ind==arr.size()) return false;
        if(dp[ind][target]!=-1) return dp[ind][target];
        bool take = false;
        if(arr[ind]<=target) take = f(ind+1, target-arr[ind], arr, dp);
        if(take) return true;
        bool leave = f(ind+1, target, arr, dp);
        return dp[ind][target]=take||leave;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int& i:nums) sum+=i;
        if(sum%2) return false;
        vector<vector<int>> dp(nums.size(), vector<int>((sum/2)+1, -1));
        return f(0, sum/2, nums, dp);
    }
};
