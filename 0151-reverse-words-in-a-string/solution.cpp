class Solution {
public:
    string reverseWords(string s)
    {
        vector<string> arr;
        string t;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' '){
                if(!t.empty()){
                    arr.push_back(t);
                    t.clear();
                }
                else{
                    continue;
                }
            }
            else if(i==s.size()-1)
            {
                t+=s[i];
                arr.push_back(t);
            }
            else
                t+=s[i];
        }
        string ans;
        for(int i=arr.size()-1; i>=0; i--)
        {
            ans+=arr[i];
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};
