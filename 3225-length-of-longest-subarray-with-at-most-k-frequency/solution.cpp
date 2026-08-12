class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxi=0;
        int i=0, j=0;
        unordered_map<int,int> hash;
        while(i<nums.size() && j<nums.size()) {
            hash[nums[i]]++;
            while(hash[nums[i]]>k) hash[nums[j++]]--;
            maxi = max(maxi, i-j+1);
            i++;
        }
        return maxi;
    }
};
