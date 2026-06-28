class Solution {
public:
    int f(int ind1,int ind2, vector<int>& s1, vector<int>& s2, vector<vector<int>>& dp){
        if(ind1==s1.size() || ind2==s2.size()) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];

        int take = 0;
        if(s1[ind1]==s2[ind2]) take = 1+f(ind1+1, ind2+1, s1, s2, dp);
        int leave1 = f(ind1+1, ind2, s1, s2, dp);
        int leave2 = f(ind1, ind2+1, s1, s2, dp);

        return dp[ind1][ind2]=max({take, leave1, leave2});
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), -1));
        return f(0, 0, nums1, nums2, dp);
    }
};
