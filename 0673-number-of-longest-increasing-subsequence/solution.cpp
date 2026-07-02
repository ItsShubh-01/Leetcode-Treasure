class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1), cnt(nums.size(), 1);
        int maxi=1;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        cnt[i]=cnt[j];
                    }
                    else if(dp[i]==dp[j]+1) cnt[i]+=cnt[j];
                }
                maxi = max(maxi, dp[i]);
            }
        }
        int val=0;
        for(int i=0; i<nums.size(); i++)
            if(dp[i]==maxi) 
                val += cnt[i];
        return val;
    }
};
