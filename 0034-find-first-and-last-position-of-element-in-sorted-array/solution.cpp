class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int first = -1;
        int last = -1;

        int start = 0;
        int end = nums.size()-1;

        while(start<=end)
        {
            int mid = start + (end - start)/2;

            if(nums[mid]==target)
            {
                first = mid;
                end = mid -1;
            }
            else if(nums[mid]>target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        int left = 0;
        int right = nums.size()-1;
        while(left<=right)
        {
            int mid = left + (right - left)/2;

            if(nums[mid]==target)
            {
                last = mid;
                left = mid + 1;
            }
            else if(nums[mid]>target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return {first,last};
    }
};
