class Solution {
public:
    const int MOD = 1e9+7;
    long long modPow(long long a, long long b) {
        long long ans = 1;
        while (b) {
            if (b & 1) ans = ans * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return ans;
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        long long count=0;
        for(int& i:nums) if(2*i<=target) count++; else break;
        int i=0, j=nums.size()-1;
        while(j>=0 && nums[i]+nums[j]>target) j--;
        if(j==-1) return 0;

        for(j; j>0; j--){
            if(i>j-1) i=j-1;
            while(i+1<=j && nums[i+1]+nums[j]<=target) i++;

            long long subs=0;
            if(i==j) subs = (modPow(2, i) - 1 + MOD) % MOD;
            else subs = (modPow(2, j) - modPow(2, j-1-i) + MOD) % MOD;
            count+=subs;
            count%=MOD;
        }
        return count;
    }
};
