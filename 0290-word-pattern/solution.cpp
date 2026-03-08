class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char,string> hash;
        vector<string> arr;
        int start = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                arr.push_back(s.substr(start,i-start));
                start = i+1;
            }
            else if(i==s.size()-1)
                arr.push_back(s.substr(start,i-start+1));
        }
        if(arr.size() != pattern.size())
            return false;

        for(int i=0; i<pattern.size(); i++)
        {
            if(hash.find(pattern[i])!=hash.end())
            {
                if(hash[pattern[i]]!=arr[i])
                    return false;
            }
            for(auto& it:hash)
            {
                if(it.second==arr[i] && it.first!=pattern[i])
                    return false;

            }
            hash[pattern[i]]=arr[i];
        }
        return true;
    }
};
