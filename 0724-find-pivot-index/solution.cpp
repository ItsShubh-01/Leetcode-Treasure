class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0, sum2 = 0;
        for(int i=0; i<n; i++)
            sum2+=nums[i];

        for(int i=0; i<n; i++)
        {
            if(i>0) sum1+=nums[i-1];
            sum2-=nums[i];
            if(sum1==sum2)
                return i;
        }
        return -1;
    }
};
