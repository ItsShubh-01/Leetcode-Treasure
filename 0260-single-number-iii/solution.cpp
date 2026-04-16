class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hash;
        for(int i=0; i<n; i++)
            hash[nums[i]]++;

        vector<int> ans;
        for(auto it:hash)
            if(it.second==1)
                ans.push_back(it.first);
        return ans;
    }
};
