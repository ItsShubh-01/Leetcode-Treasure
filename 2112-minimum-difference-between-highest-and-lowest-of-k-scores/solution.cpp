class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        if(nums.size()==1) return 0; 

        int minDif = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-k+1; i++)
        {
            if((nums[i+k-1]-nums[i])<minDif) minDif = nums[i+k-1]-nums[i];
        }
        return minDif;
    }
};
