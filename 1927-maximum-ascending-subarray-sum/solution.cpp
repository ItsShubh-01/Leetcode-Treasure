class Solution {
public:
    int maxAscendingSum(vector<int>& nums)
    {
        int max_sum = 0;
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i==0 || nums[i]>nums[i-1])
            {
                sum+=nums[i];
                if(sum>max_sum)
                    max_sum = sum;
            }
            else
                sum = nums[i];
        }
        return max_sum;
    }
};
