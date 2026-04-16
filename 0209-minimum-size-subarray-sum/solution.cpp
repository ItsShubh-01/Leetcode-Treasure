class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0, j=0;
        int sum = 0;
        int min_size = INT_MAX;
        while(i<n)
        {
            sum+=nums[i++];
            while(sum>target){
                if(sum>=target)
                    min_size = min(min_size,i-j);
                sum-=nums[j++];
            }    
            if(sum==target)
                min_size = min(min_size,i-j);
        }
        if(min_size == INT_MAX)
            return 0;
        return min_size;
    }
};
