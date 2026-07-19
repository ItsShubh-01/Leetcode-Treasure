class Solution {
public:
    void f(int count1, int count2, string& s, vector<string>& temp){
        if(count1==0 && count2==0) {
            temp.push_back(s);
            return;
        }
        
        if(count1>0) {
            s+='(';
            f(count1-1, count2, s, temp);
            s.pop_back();
        }
        if(count2>count1) {
            s+=')';
            f(count1, count2-1, s, temp);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> temp;
        string s;
        f(n, n, s, temp);
        return temp;
    }
};
