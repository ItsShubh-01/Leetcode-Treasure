class Solution {
public:
    int offset=0;
    int f(int ind, int target, vector<int>& arr, vector<vector<int>>& dp){
        if(ind==arr.size()) return target==0?1:0;
        if(target<-offset || target>offset) return 0;
        if(dp[ind][target+offset]!=-1) return dp[ind][target+offset];

        int add = f(ind+1, target-arr[ind], arr, dp);
        int subt = f(ind+1, target+arr[ind], arr, dp);
        return dp[ind][target+offset]=add+subt;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0; for(int& i:nums) sum+=abs(i); offset=sum;
        vector<vector<int>> dp(nums.size(), vector<int>((2*sum)+1, -1));
        return f(0, target, nums, dp);
    }
};
