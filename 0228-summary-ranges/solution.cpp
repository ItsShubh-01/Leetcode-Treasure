class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0) return {};
        vector<string> ans;
        int start=nums[0], end=nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]==end+1) end=nums[i];
            else {
                string t;
                if(start<end) t = to_string(start) + "->" + to_string(end);
                else t = to_string(start);
                ans.push_back(t);
                start=nums[i];
                end=nums[i];
            }
        }
        string t;
        if(start<end) t = to_string(start) + "->" + to_string(end);
        else t = to_string(start);
        ans.push_back(t);
        return ans;
    }
};
