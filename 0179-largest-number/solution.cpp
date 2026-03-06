class Solution {
public:
    static bool cmp(const string& a,const string& b)
    {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums)
    {
        vector<string> str;
        size_t total = 0;
        str.reserve(nums.size());
        for(const int& i:nums)
        {
            string s = to_string(i);
            total += s.size();
            str.push_back(move(s));
        }

        sort(str.begin(),str.end(),cmp);
        string ans;
        ans.reserve(total);
        for(const string& ch:str)
            ans+=ch;

        if(ans[0]=='0')
            return "0";
        return ans;
    }
};
