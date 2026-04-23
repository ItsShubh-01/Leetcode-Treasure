class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,vector<int>> hash;
        for(int i=0; i<n; i++)
            hash[nums[i]].push_back(i);
        
        for(auto it:hash)
            if(it.second.size()>1)
                for(int i=1; i<it.second.size(); i++)
                    if(it.second[i]-it.second[i-1]<=k)
                        return true;
        return false;
    }
};
