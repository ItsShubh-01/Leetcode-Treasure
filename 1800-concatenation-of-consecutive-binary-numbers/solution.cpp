class Solution {
public:
    int concatenatedBinary(int n)
    {
        long long val = 0;
        static const int MOD = 1e9 + 7;
        for(int i=1; i<=n; i++){
            int bits = 32 - __builtin_clz(i);
            val = (( val << bits ) + i) % MOD;
        }
        return val;
    }
};
