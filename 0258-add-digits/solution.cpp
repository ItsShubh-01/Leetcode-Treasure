class Solution {
public:
    int getNewNum(int num)
    {
        int sum = 0;
        while(num>0)
        {
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int addDigits(int num)
    {
        while(true)
        {
            if(num/10==0)
                return num;
            else
                num = getNewNum(num);
        }
        return -1;
    }
};
