class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string temp;
        for(char &ch:s) if(ch!='-') {
            if(islower(ch)) temp+=toupper(ch);
            else temp+=(ch);
        }
        string ans;
        int rem = temp.size()%k;
        int i=0; while(i<rem) ans+=temp[i++];
        if(rem>0 && rem!=temp.size()) ans+='-';

        int count = 0;
        while(i<temp.size()){
            if(count==k) {ans.push_back('-'); count=0;}
            ans+=temp[i++];
            count++;
        }
        return ans;
    }
};
