class Solution {
public:
    int longestValidParentheses(string s) {
        int max_count = 0;
        int count = 0;
        vector<int> arr;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='('){
                arr.push_back(s[i]);
                count++;
            }
            else if(s[i]==')' && !arr.empty() && arr.back()=='(')
            {
                arr.pop_back();
                count++;
            }
            else if(s[i]==')' && arr.empty())
            {
                arr.clear();
                count = 0;
            }
            if(arr.size()==0)
                max_count = max(max_count,count);
        }
        if(count!=0)
        {
            count = 0;
            arr.clear();
            for(int i=s.size()-1; i>=0; i--)
            {
                if(s[i]==')'){
                    arr.push_back(s[i]);
                    count++;
                }
                else if(s[i]=='(' && !arr.empty() && arr.back()==')')
                {
                    arr.pop_back();
                    count++;
                }
                else if(s[i]=='(' && arr.empty())
                {
                    arr.clear();
                    count = 0;
                }
                if(arr.size()==0)
                    max_count = max(max_count,count);
            }
        }
        return max_count;
    }
};
