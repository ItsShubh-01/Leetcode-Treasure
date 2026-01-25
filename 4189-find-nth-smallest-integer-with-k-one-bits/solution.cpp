class Solution {
public:
    long long nCr(long long n, int r)
    {
        if (r > n) return 0;
        if (r > n - r) r = n - r;   // symmetry

        long long result = 1;
        for (long long i = 1; i <= r; i++) {
            result = result * (n - r + i) / i;
        }
        return result;
    }

    long long nthSmallest(long long n, int k) 
    {
        long long num = 1;
        long long count = 1;
        long long value = pow(2,k)-1;
        long long var = nCr(num+k-2,k-1);
        int temp = k-1;

        while(count<n)
        {
            count += var;
            value += pow(2,temp);num++;temp++;var = nCr(num+k-2 , k-1);
            if(count == n) return value;
            if(count > n) 
            {
                count -= nCr(num+k-3 , k-1);
                value -= pow(2,temp-1);
                k--;
                num = 1;
                var = nCr(num+k-2,k-1);
                temp = k-1;
            }
        }
        return value;
    }
};
