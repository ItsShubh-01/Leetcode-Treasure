class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long i=0; i<=sqrt(c)+1; i++)
        {
            long long num = (long long)c - (long long)(i*i);
            int sqt = 0;
            if(num>=0)
                sqt = sqrt(num);
            else
                return false;
            if(sqt * sqt == num)
                return true;
        }
        return false;
    }
};
