class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> count(26, 0);
        for(int i=0; i<s.size(); i++) {
            count[s[i]-'a']++;
        }
        string t; string temp;
        for(int i=0; i<26; i++) {
            while(count[i]>1) {
                t+='a'+i;
                count[i]-=2;
            }
            if(count[i]==1) temp='a'+i;
        }

        string g=t;
        reverse(g.begin(), g.end());
        return t+temp+g;
    }
};
