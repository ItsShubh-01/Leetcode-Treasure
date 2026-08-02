class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<nums.size(); j++) {
                long long val = ((long long)nums[i]*(long long)nums[j])/((long long)gcd(nums[i], nums[j])*(long long)gcd(nums[i], nums[j]));
                if(val>ans) ans = val;
            }
        }
        return ans;
    }
};
