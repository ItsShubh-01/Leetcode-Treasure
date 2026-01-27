class Solution 
{
    public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       int first = 0;
       int i=first+1;
       int second;
       while(i<nums.size() && first <nums.size())
       {
            if(nums[first] + nums[i] == target) return {first,i};
            else i++;
            if(i==nums.size())
            {
                first++;
                i = first+1;
            }
       }
       return {-1,-1};
    }
};
