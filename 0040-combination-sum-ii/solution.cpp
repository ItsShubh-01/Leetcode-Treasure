class Solution {
public:
    void f(int ind, int& target, vector<int>& temp, vector<int>& arr, vector<vector<int>>& ans){
        if(target==0) {ans.push_back(temp); return;}
        if(ind==arr.size()) return;

        for(int i=ind; i<arr.size(); i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            temp.push_back(arr[i]);
            target-=arr[i];
            f(i+1, target, temp, arr, ans);
            temp.pop_back();
            target+=arr[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> arr;
        f(0, target, arr, candidates, ans);
        return ans;
    }
};
