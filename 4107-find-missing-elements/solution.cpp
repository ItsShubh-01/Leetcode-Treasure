class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int &i:nums) hash[i]=1;
        int start = *min_element(nums.begin(), nums.end());
        int end = *max_element(nums.begin(), nums.end());

        vector<int> ans;
        for(int i=start; i<=end; i++)
            if(hash[i]==0) ans.push_back(i);
        return ans;
    }
};
