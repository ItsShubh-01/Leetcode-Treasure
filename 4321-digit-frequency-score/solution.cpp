class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> digit(10);
        while(n>0){
            digit[n%10]++;
            n/=10;
        }
        int val = 0;
        for(int i=0; i<10; i++)
            val+=(i*digit[i]);
        return val;
    }
};
