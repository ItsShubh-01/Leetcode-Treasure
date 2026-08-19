class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int& i:nums) hash[i]++;
        if(k==nums.size()) 
            return *max_element(nums.begin(), nums.end());
        if(k==1) {
            int large = -1;
            for(auto it:hash) 
                if(it.second==1 && it.first>large) 
                    large = it.first;
            return large;
        }
        int large = -1;
        if(hash[nums[0]]==1) large = nums[0];
        if(hash[nums.back()]==1) large = max(large, nums.back());
        return large;
    }
};
