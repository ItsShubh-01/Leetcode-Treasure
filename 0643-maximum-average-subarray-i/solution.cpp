class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = INT_MIN;
        int i=0;
        double sum = 0;
        while(i<k) sum+=nums[i++];
        maxAvg = max(maxAvg,sum);
        
        while(i<nums.size())
        {
            sum+=nums[i++] - nums[i-k-1];
            maxAvg = max(maxAvg, sum);
        }
        return maxAvg/k;
    }
};
