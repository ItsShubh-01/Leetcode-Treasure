class Solution {
public:
    int f(int ind1, int ind2, string& s, vector<vector<bool>>& dp) {
        if(ind1+1==ind2 && s[ind1]==s[ind2]) return 1;
        if(ind1==ind2) return 1;
        if(dp[ind1][ind2]) return 1;
        if(s[ind1]!=s[ind2]) return 0;
        return dp[ind1][ind2]=f(ind1+1, ind2-1, s, dp);
    }
    int countSubstrings(string s) {
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        int count=0;
        for(int i=0; i<s.size(); i++) {
            for(int j=i; j<s.size(); j++) {
                count+=f(i, j, s, dp);
            }
        }
        return count;
    }
};
