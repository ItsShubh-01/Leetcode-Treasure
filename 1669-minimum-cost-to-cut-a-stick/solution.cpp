class Solution {
public:
    int f(int i, int j, vector<int>& arr, vector<vector<int>>& dp){
        if(i==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];

        int mini = 1e9;
        for(int ind=1; ind<arr.size()-1; ind++){
            if(arr[ind]<=arr[i]) continue;
            if(arr[ind]>=arr[j]) break;
            int cost = arr[j]-arr[i] + f(i, ind, arr, dp) + f(ind, j, arr, dp);
            mini = min(mini, cost);
        }
        return dp[i][j]= mini==1e9?0:mini;
    }
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(), cuts.end());
        vector<int> arr;
        arr.push_back(0);
        for(int& i:cuts) arr.push_back(i);
        arr.push_back(n);

        vector<vector<int>> dp(arr.size(), vector<int>(arr.size(), -1));
        return f(0, arr.size()-1, arr, dp);
    }
};
