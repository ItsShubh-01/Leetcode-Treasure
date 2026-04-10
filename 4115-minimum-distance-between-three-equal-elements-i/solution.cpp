class Solution {
public:
    int minimumDistance(vector<int>& nums)
    {
        int n = nums.size();
        int min_dist = INT_MAX;
        for(int i=0; i<n; i++)
        {
            int count = 0;
            for(int j=i+1; j<n; j++)
            {
                if(nums[j]==nums[i])
                    count++;
                if(count==2){
                    min_dist = min(min_dist,2*(j-i));
                    break;
                }
            }
        }
        if(min_dist == INT_MAX)
            return -1;
        return min_dist;
    }
};
