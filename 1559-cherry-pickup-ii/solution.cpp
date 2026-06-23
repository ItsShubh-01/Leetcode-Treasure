class Solution {
public:
    #define vi vector<int>
    #define vvi vector<vi>
    #define vvvi vector<vvi>

    int f(int i,int aj,int bj, vvi& arr, vvvi& dp){
        if(aj<0||bj<0||aj>=arr[0].size()||bj>=arr[0].size()) return 0;
        if(i==arr.size()-1) return aj!=bj? arr[i][aj]+arr[i][bj]:arr[i][aj];
        if(dp[i][aj][bj]!=-1) return dp[i][aj][bj];

        int maxi = 0;
        maxi = max(maxi, f(i+1, aj-1, bj-1, arr, dp));
        maxi = max(maxi, f(i+1, aj-1, bj, arr, dp));
        maxi = max(maxi, f(i+1, aj-1, bj+1, arr, dp));
        maxi = max(maxi, f(i+1, aj, bj-1, arr, dp));
        maxi = max(maxi, f(i+1, aj, bj, arr, dp));
        maxi = max(maxi, f(i+1, aj, bj+1, arr, dp));
        maxi = max(maxi, f(i+1, aj+1, bj-1, arr, dp));
        maxi = max(maxi, f(i+1, aj+1, bj, arr, dp));
        maxi = max(maxi, f(i+1, aj+1, bj+1, arr, dp));

        if(aj!=bj) return dp[i][aj][bj]=arr[i][aj]+arr[i][bj]+maxi;
        else return dp[i][aj][bj]= arr[i][aj]+maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        vvvi dp(grid.size(), vvi(grid[0].size(), vi(grid[0].size(), -1)));
        return f(0, 0, grid[0].size()-1, grid, dp);
    }
};
