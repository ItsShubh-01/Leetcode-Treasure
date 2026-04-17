class Solution {
public:
    int findComplement(int num) {
        int val=0, i=0;
        while(num>0)
        {
            if(num%2==0) val+=(1<<i);
            num/=2;
            i++;
        }
        return val;
    }
};
