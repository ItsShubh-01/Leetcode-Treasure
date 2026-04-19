class Solution {
public:
    void f(vector<int>& nums, int ind, int target, vector<int>& arr, vector<vector<int>>& ans)
    {   
        if(ind == nums.size()){
            if(target==0)
                ans.push_back(arr);
            return;
        }
        if(target<0)
            return;

        if(nums[ind]<=target)
        {
            arr.push_back(nums[ind]);
            f(nums, ind, target-nums[ind], arr, ans);
            arr.pop_back();
        }
        f(nums, ind+1, target, arr, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>> ans;
        vector<int> arr;
        f(candidates, 0, target, arr, ans);
        return ans;
    }
};
