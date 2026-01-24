class Solution {
public:
    int minPairSum(vector<int>& nums)
    {
        int maxSum = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()/2; i++) maxSum = max(maxSum,nums[i]+nums[nums.size()-i-1]);
        return maxSum;
    }
};
