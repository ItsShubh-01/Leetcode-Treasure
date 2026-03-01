class Solution {
public:
    int maximizeSum(vector<int>& nums, int k)
    {
        int maximum = INT_MIN;
        for(int num:nums)
            maximum = max(num,maximum);
        
        return (maximum*k + (k*(k-1)/2));
    }
};
