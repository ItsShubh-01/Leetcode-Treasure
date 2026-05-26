class Solution {
public:
    int getSum(int a, int b) {
        string s;
        string a1 = bitset<32>(a).to_string();
        string b1 = bitset<32>(b).to_string();

        int i=a1.size()-1, j=b1.size()-1, k=s.size()-1;
        bool carry = false;
        while(i>=0 && j>=0){
            if(a1[i]=='0'){
                if(b1[j]=='0'){
                    if(!carry) s+='0';
                    else {
                        s+='1';
                        carry = false;
                    }
                }
                else if(!carry) s+='1';
                else{
                    s+='0';
                    carry = true;
                }
            }
            else{
                if(b1[j]=='0'){
                    if(!carry) s+='1';
                    else{
                        s+='0';
                        carry = true;
                    }
                }
                else if(!carry){
                    s+='0';
                    carry = true;
                }
                else s+='1';
            }
            i--; j--; k--;
        }

        int val = 0;
        for(int i=0; i<s.size(); i++)
            if(s[i]=='1')
                val+=(1<<i);
        return val;
    }
};
