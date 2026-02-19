class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]>=target && i!=0 && nums[i-1]<target)
                return i;
            else if(i==0 && nums[i]>=target)
                return 0;
            else if(i==nums.size()-1)
                return i+1;
        }
        return -1;
    }
};
