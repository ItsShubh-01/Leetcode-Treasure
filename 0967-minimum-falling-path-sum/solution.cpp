class Solution {
public:
    int f(int i, int j, vector<vector<int>>& arr, vector<vector<int>>& dp){
        if(i==arr.size()-1) return arr[i][j];
        if(dp[i][j]!=-101) return dp[i][j];

        int leftdig = INT_MAX, rightdig = INT_MAX, down = arr[i][j]+f(i+1, j, arr, dp);
        if(j>0) leftdig = arr[i][j]+f(i+1, j-1, arr, dp);
        if(j<arr.size()-1) rightdig=arr[i][j]+f(i+1, j+1, arr, dp);
        return dp[i][j]=min({leftdig, down, rightdig});
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix.size(), -101));
        int mini=INT_MAX;
        for(int i=0; i<matrix.size(); i++)
            mini = min(mini, f(0, i, matrix, dp));
        return mini;
    }
};
