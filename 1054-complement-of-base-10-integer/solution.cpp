class Solution {
public:
    int bitwiseComplement(int n)
    {
        if(n==0) return 1;
        string s = bitset<32>(n).to_string();
        s = s.substr(s.find('1'));

        int val = 0;
        for(int i=0; i<s.size(); i++)
            if(s[i]=='0')
                val+=(1<<(s.size()-i-1));

        return val;
    }
};
