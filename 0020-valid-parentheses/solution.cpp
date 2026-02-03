class Solution {
public:
    bool isValid(string s)
    {
        vector<char> arr;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                arr.push_back(s[i]);
            else if(s[i] == ')' && arr.size()>0 && arr.back() == '(')
                arr.pop_back();
            else if(s[i] == '}' && arr.size()>0 && arr.back() == '{')
                arr.pop_back();
            else if(s[i] == ']' && arr.size()>0 && arr.back() == '[')
                arr.pop_back();
            else
                return false;
        }
        if(arr.empty()) 
            return true;
        else 
            return false;
    }
};
