class Solution {
public:
    bool check(int i, int j, int k, string& s1, string& s2, string& s3, vector<vector<int>>& dp) {
        if(i==s1.size() && j==s2.size() && k==s3.size()) return true;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i<s1.size() && j<s2.size() && s1[i]==s2[j] && s1[i]==s3[k])
            return dp[i][j]=check(i+1,j,k+1, s1, s2, s3, dp) || check(i, j+1, k+1, s1, s2, s3, dp);
        else if(i<s1.size() && s1[i]==s3[k]) return dp[i][j]=check(i+1, j, k+1, s1, s2, s3, dp);
        else if(j<s2.size() && s2[j]==s3[k]) return dp[i][j]=check(i, j+1, k+1, s1, s2, s3, dp);
        else return dp[i][j]=false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>> dp(s1.size()+1, vector<int>(s2.size()+1, -1));
        if(s1.size()+s2.size()!=s3.size()) return false;
        return check(0, 0, 0, s1, s2, s3, dp);
    }
};
