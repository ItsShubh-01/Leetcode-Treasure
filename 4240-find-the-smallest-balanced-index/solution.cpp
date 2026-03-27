class Solution {
public:
    unsigned long long val = 1e14;
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        unsigned long long left = 0, right = 1;
        for (int i = 0; i < n; i++)
            left += nums[i];

        int ans = -1;
        for (int i = n - 1; i >= 0; i--) {
            left -= nums[i];
            if (left < right)
                return ans;
            else if (left == right)
                ans = i;
            else if (right>val/nums[i])
                return ans;
            right *= nums[i];
        }
        return ans;
    }
};
