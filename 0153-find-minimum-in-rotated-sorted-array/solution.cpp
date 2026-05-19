class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        if(nums[0]<=nums[n-1]) return nums[0];

        while(start<=end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid]>=nums[0]) start = mid+1;
            else if(nums[mid]<nums[mid-1]) return nums[mid];
            else end = mid-1;
        }
        return start;
    }
};
