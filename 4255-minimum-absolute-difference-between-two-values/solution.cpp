class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int min_diff = 101;
        int ind_1 = -1;
        int ind_2 = -1;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
                ind_1 = i;
            else if(nums[i]==2)
                ind_2 = i;

            if(ind_1!=-1 && ind_2!=-1)
                min_diff = min(min_diff,abs(ind_1-ind_2));
        }
        if(min_diff==101)
            return -1;
        return min_diff;
    }
};
