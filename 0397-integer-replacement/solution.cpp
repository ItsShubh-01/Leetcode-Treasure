class Solution {
public:
    int f(long long n, unordered_map<int,int>& dp){
        if(dp.find(n)!=dp.end()) return dp[n];

        if(n%2==0) return dp[n]=1+f(n/2, dp);
        else return dp[n]=1+min(f(n-1, dp), f(n+1, dp));
    }
    int integerReplacement(int n) {
        unordered_map<int,int> dp;
        dp[1]=0;
        return f(n, dp);
    }
};
