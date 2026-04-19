class Solution {
public:
    int f(vector<int>& nums, int ind, int sum, int& target)
    {
        if(ind==nums.size())
            return sum==target? 1:0;

        sum+=nums[ind];
        int l = f(nums, ind+1, sum, target);
        sum-=2*nums[ind];
        int r = f(nums, ind+1, sum, target);

        return l+r;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return f(nums, 0, 0, target);
    }
};
