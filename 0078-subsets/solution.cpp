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

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr = {};
        f(ans, nums, arr, 0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
