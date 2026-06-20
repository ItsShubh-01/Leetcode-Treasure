class Solution {
public:
    long long maxl(long long a, long long b) {return a>=b? a:b;}
    long long f(int ind, vector<int>& arr, vector<int>& colors, vector<long long>& dp){
        if(ind>=arr.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];

        if(ind<arr.size()-1){
            if(colors[ind]!=colors[ind+1]) 
                return dp[ind]=arr[ind]+f(ind+1, arr, colors, dp);
            else{
                long long take = arr[ind]+f(ind+2, arr, colors, dp);
                long long leave = f(ind+1, arr, colors, dp);
                return dp[ind] =maxl(take, leave);
            }
        }else return dp[ind] = arr[ind];
    }
    long long rob(vector<int>& nums, vector<int>& colors) {
        vector<long long> dp(nums.size(), -1);
        return f(0, nums, colors, dp);
    }
};
