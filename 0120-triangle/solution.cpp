class Solution {
public:
    int f(int i, int j, vector<vector<int>>& arr, vector<vector<int>>& dp){
        if(i==arr.size()-1) return arr[i][j];
        if(dp[i][j]!=-1*1e5) return dp[i][j];

        int down=arr[i][j]+f(i+1, j, arr, dp);
        int dig=arr[i][j]+f(i+1, j+1, arr, dp);
        return dp[i][j]=min(down, dig); 
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp;
        for(int i=1; i<=triangle.size(); i++) {
            vector<int> a(i, -1*1e5);
            dp.push_back(a);
        }
        return f(0, 0, triangle, dp);
    }
};
