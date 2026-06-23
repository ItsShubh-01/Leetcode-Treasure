class Solution {
public:
    bool consecutiveSetBits(int n) {
        string s = bitset<32>(n).to_string();
        int count=0;
        for(int i=1; i<=32; i++)
            if(s[i]=='1' && s[i-1]=='1') count++;
        return count==1? true:false;
    }
};
