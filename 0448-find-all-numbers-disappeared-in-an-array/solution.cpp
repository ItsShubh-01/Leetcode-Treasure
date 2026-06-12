class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        for(int i=1; i<=nums.size(); i++) s.insert(i);
        for(int i:nums) s.erase(i);
        vector<int> ans;
        for(auto it:s) ans.push_back(it);
        return ans;
    }
};
