class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix, suffix;
        int temp=1;
        for(int i=0; i<nums.size(); i++) {
            prefix.push_back(temp);
            temp*=nums[i];
        }
        temp=1;
        for(int i=nums.size()-1; i>=0; i--) {
            suffix.push_back(temp);
            temp*=nums[i];
        }

        vector<int> ans;
        for(int i=0; i<nums.size(); i++) ans.push_back(prefix[i]*suffix[nums.size()-i-1]);
        return ans;
    }
};
