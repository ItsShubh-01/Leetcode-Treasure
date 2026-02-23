class Solution {
public:
    bool isDigitorialPermutation(int n) 
    {
        vector<int> fact = {1,1,2,6,24,120,720,5040,40320,362880};
        int copy = n;
        int val = 0;
        while(copy>0)
        {
            val+=fact[copy%10];
            copy/=10;
        }
        vector<int> freq1(10, 0), freq2(10, 0);
        int temp = n;
        while(temp > 0)
        {
            freq1[temp % 10]++;
            temp /= 10;
        }
        int temp2 = val;
        while(temp2 > 0)
        {
            freq2[temp2 % 10]++;
            temp2 /= 10;
        }
        if(freq1 == freq2)
            return true;
        else
            return false;
    }
};
