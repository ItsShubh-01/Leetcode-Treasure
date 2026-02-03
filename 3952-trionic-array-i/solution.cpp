class Solution {
public:
    bool isTrionic(vector<int>& nums)
    {
        int edge = 0;
        if(nums[1]<=nums[0]) return false;
        for(int i=1 ; i<nums.size()-1 ; i++)
        {
            if(nums[i]==nums[i+1]) return false;
            if((nums[i]<nums[i+1] && nums[i]<nums[i-1]) || (nums[i]>nums[i-1] && nums[i]>nums[i+1]))
                edge++;
            if(edge>2) return false;
        }
        if(edge==2) return true;
        else return false;
    }
};
