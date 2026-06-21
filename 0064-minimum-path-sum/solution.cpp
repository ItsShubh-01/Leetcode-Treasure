class Solution {
public:
    int f(int i, int j, vector<vector<int>>& arr, vector<vector<int>>& dp){
        if(i==arr.size()-1 && j==arr[0].size()-1) return arr[i][j];
        if(dp[i][j]!=-1) return dp[i][j];

        int right=INT_MAX, down=INT_MAX;
        if(j<arr[0].size()-1) right = arr[i][j]+f(i, j+1, arr, dp);
        if(i<arr.size()-1) down = arr[i][j]+f(i+1, j, arr, dp);
        return dp[i][j]=min(right, down);
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        return f(0, 0, grid, dp);
    }
};
