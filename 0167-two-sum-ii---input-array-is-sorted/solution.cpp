class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tgt) {
        int i=0; int j=nums.size()-1;
        while(i<=j)
        {
            if(nums[i]+nums[j]==tgt)
                return {i+1,j+1};
            else if(nums[i]+nums[j]<tgt)
                i++;
            else
                j--;
        }
        return{-1,-1};
    }
};
