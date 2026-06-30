class Solution {
public:
    bool f(int ind1, int ind2, string& s, string& t, vector<vector<int>>& dp){
        if(ind1==s.size() && ind2==t.size()) return true;
        else if(ind1==s.size() || ind2==t.size()) {
            for(int i=ind1; i<s.size(); i++) if(s[i]!='*') return false;
            for(int i=ind2; i<t.size(); i++) if(t[i]!='*') return false;
            return true;
        }
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];

        if(s[ind1]==t[ind2] || t[ind2]=='?')
            return dp[ind1][ind2]=f(ind1+1, ind2+1, s, t, dp);
        else if(t[ind2]=='*')
            return dp[ind1][ind2]=f(ind1+1, ind2, s, t, dp) || f(ind1, ind2+1, s, t, dp);
        else return dp[ind1][ind2]=false;
    }
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size(), vector<int>(p.size(), -1)); 
        return f(0, 0, s, p, dp);
    }
};
