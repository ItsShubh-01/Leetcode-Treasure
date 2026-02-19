class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int max_count = 0;
        int count = 0;
        bool cont = false;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==1 && !cont)
            {
                count++;
                cont = true;
            }
            else if(nums[i]==1 && cont)
                count++;
            else
            {
                max_count = max(max_count , count);
                count = 0;
                cont = false;
            }
        }
        max_count = max(max_count , count);
        return max_count;
    }
};
