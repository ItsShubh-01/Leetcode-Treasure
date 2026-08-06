class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string t;
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='(') count++;
            if(count!=1) t+=s[i];
            if(s[i]==')') count--;
        }
        return t;
    }
};
