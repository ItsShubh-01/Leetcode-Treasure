class Solution {
public:
    int f(int i, string& s, vector<int>& dp, vector<vector<bool>>& pal){
        if(pal[i][s.size()-1]) return 0;
        if(dp[i]!=-1) return dp[i];

        int mini = INT_MAX;
        for(int ind=i; ind<s.size(); ind++)
            if(pal[i][ind])
                mini = min(mini, 1+f(ind+1, s, dp, pal));
        return dp[i]=mini;
    }
    int minCut(string s) {
        int n = s.size();
        vector<vector<bool>> pal(n, vector<bool>(n, false));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j]){
                    if(j-i<=1) pal[i][j]=true;
                    else pal[i][j]=pal[i+1][j-1];
                }
            }
        }
        vector<int> dp(n, -1);
        return f(0, s, dp, pal);
    }
};
