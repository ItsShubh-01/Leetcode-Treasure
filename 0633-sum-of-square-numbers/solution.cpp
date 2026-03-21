class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0; i<=sqrt(c); i++)
        {
            int num = c - i*i;
            int b = sqrt(num);
            if(b * b == num)
                return true;
        }
        return false;
    }
};
