class Solution {
public:
    int calc(int n)
    {
        int ans = 0;
        while(n>0)
        {
            ans += (n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n)
    {
        while(n!=1)
        {
            n = calc(n);
            if(n==89)
                return false;
        }
        return true;
    }
};
