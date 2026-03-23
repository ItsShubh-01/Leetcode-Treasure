class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;

        // Step 1: find first decreasing element
        while(i >= 0 && nums[i] >= nums[i+1]) i--;

        if(i >= 0) {
            int j = nums.size() - 1;

            // Step 2: find just greater element
            while(nums[j] <= nums[i]) j--;

            swap(nums[i], nums[j]);
        }

        // Step 3: reverse suffix
        reverse(nums.begin() + i + 1, nums.end());
    }
};
