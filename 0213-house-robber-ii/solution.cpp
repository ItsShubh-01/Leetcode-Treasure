class Solution {
public:
    int f(int ind, vector<int> &arr, vector<int> &dp){
        if(ind>=arr.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];

        int take = arr[ind]+f(ind+2, arr, dp);
        int leave = f(ind+1, arr, dp);
        return dp[ind]=max(take, leave);
    }
    int rob(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        vector<int> dp1(arr.size(), -1);
        int inclast = f(1, arr, dp1);
        arr.pop_back();
        dp1.assign(arr.size(), -1);
        int incfirst = f(0, arr, dp1);
        return max(inclast, incfirst);
    }
};
