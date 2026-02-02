class Solution {
public:
    int bitwiseComplement(int n) 
    {
        int count = 0;
        int temp = n;
        while(temp>0)
        {
            count++;
            temp/=2;
        }
        if(count==0) return 1;
        return pow(2,count)-n-1;
    }
};
