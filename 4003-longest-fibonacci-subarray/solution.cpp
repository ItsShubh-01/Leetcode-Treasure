class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 2, start = 0;
        for(int i=2; i<n; i++)
        {
            if(nums[i]!=nums[i-1]+nums[i-2])
            {
                maxLen = max(maxLen, i-start);
                start = i-1;
            }
        }
        maxLen = max(maxLen, n-start);
        return maxLen;
    }
};
