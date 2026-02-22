class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        if(nums.empty())
            return 0;

        sort(nums.begin(),nums.end());

        int max_count = 1;
        int count = 1;

        for(int i=1 ; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                count++;
                max_count = max(max_count,count);
            }
            else if(nums[i]==nums[i-1])
                continue;
            else
                count = 1;
            
        }
        return max_count;
    }
};
