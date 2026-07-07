class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string t;
        long long sum=0;
        for(char ch:s){
            sum+=ch-'0';
            if(ch!='0') t+=ch;
        }
        long long val = !t.empty() ? stoi(t):0;
        return val*sum;
    }
};
