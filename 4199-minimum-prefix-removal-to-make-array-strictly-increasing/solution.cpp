class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) 
    {
        int prefix = 0;
        for(int i=nums.size()-1 ; i>0;)
        {
            if(nums[i] <= nums[i-1]) {
                prefix = i;
                return prefix;
            }
            i--;
        }
        return prefix;
    }
};
