class Solution {
public:
    vector<string> def={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> f(string s,vector<string>&arr){
        vector<string> sol;
        for(int i=0;i<arr.size();i++)
            for(int j=0; j<s.size(); j++)
                sol.push_back(arr[i]+s[j]);
        return sol;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans = {""};
        for(int i=0; i<digits.size(); i++)
            ans = f(def[digits[i]-'0'],ans);
        return ans;
    }
};
