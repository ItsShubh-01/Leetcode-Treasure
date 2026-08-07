class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int i=nums.size();
        sort(nums.begin(), nums.end());
        int maxi = nums[i-1]*nums[i-2]*nums[i-3];
        maxi = max(maxi, nums[i-1]*nums[0]*nums[1]);
        return maxi;
    }
};
