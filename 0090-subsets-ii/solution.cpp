class Solution {
public:
    void f(vector<vector<int>>& ans, vector<int>& nums, vector<int>& arr, int ind)
    {
        if(ind == nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[ind]);
        f(ans, nums, arr, ind+1);
        arr.pop_back();
        f(ans, nums, arr, ind+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr = {};
        sort(nums.begin(),nums.end());
        f(ans, nums, arr, 0);
        sort(ans.begin(),ans.end());

        vector<vector<int>> ans2;
        ans2.push_back(ans[0]);
        for(int i=0; i<ans.size(); i++)
            if(ans[i]!=ans2.back())
                ans2.push_back(ans[i]);
        return ans2;
    }
};
