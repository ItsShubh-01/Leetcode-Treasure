class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int& i:nums) hash[i]++;
        for(auto it:hash) if(it.second%2) return false;
        return true;
    }
};
