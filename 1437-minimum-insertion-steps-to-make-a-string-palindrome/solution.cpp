class Solution {
public:
    int f(int ind1, int ind2, string& s, vector<vector<int>>& dp){
        if(ind1>ind2) return 0;
        if(ind1==ind2) return 1;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];

        int take = 0;
        if(s[ind1]==s[ind2]) take = 2+f(ind1+1, ind2-1, s, dp);
        int leave1 = f(ind1+1, ind2, s, dp);
        int leave2 = f(ind1, ind2-1, s, dp);

        return dp[ind1][ind2] = max({take, leave1, leave2});
    }
    int minInsertions(string s) {
        vector<vector<int>> dp(s.size(), vector<int>(s.size(), -1));
        return s.size()-f(0, s.size()-1, s, dp);
    }
};
