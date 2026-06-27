class Solution {
public:
    int f(int ind1, int ind2, string& s1, string& s2, vector<vector<int>>& dp){
        if(ind1==s1.size() || ind2==s2.size()) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];

        int take = 0;
        if(s1[ind1]==s2[ind2]) take = 1+f(ind1+1, ind2+1, s1, s2, dp);
        int leave1 = f(ind1+1, ind2, s1, s2, dp);
        int leave2 = f(ind1, ind2+1, s1, s2, dp);
        int leaveBoth = f(ind1+1, ind2+1, s1, s2, dp);
        return dp[ind1][ind2] = max({take, leave1, leave2, leaveBoth});
    }
    int longestCommonSubsequence(string str1, string str2) {
        vector<vector<int>> dp(str1.size(), vector<int>(str2.size(), -1));
        return f(0, 0, str1, str2, dp);
    }
};
