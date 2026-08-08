class Solution {
public:
    int f(int i, int j, vector<vector<int>>& arr, vector<vector<int>>& dp) {
        if(i==arr.size()-1 && j==arr[0].size()-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];

        int right=0, down=0;
        if(j<arr[0].size()-1 && arr[i][j+1]!=1) right = f(i, j+1, arr, dp);
        if(i<arr.size()-1 && arr[i+1][j]!=1) down = f(i+1, j, arr, dp);
        return dp[i][j]=right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        if(arr[0][0]==1) return 0;
        if(arr[arr.size()-1][arr[0].size()-1]==1) return 0;
        vector<vector<int>> dp(arr.size()+1, vector<int>(arr[0].size()+1, -1));
        return f(0, 0, arr, dp);
    }
};
