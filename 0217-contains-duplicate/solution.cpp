class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(const int& i:nums) if(hash[i]++) return true;
        return false;
    }
};
