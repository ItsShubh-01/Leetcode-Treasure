class Solution {
public:
    int findMin(vector<int>& nums)
    {
        int mini = INT_MAX;

        int start = 0;
        int end = nums.size()-1;

        while(start<=end)
        {
            int mid = start + (end- start)/2;

            if(nums[mid]>nums[end])
                start = mid+1;
            else{
                mini = min(nums[mid],mini);
                end = mid - 1;
            }
        }
        return mini;
    }
};
