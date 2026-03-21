class Solution {
public:
    vector<int> findSubstring(string s, vector<string> &words)
    {
        int n = words.size();
        int m = words[0].size();
        int size = s.size();

        if(size < n*m)
            return {};

        unordered_map<string,int> check;
        for(const string& st : words)
            check[st]++;
        
        vector<int> ans;

        for(int i=0; i<=size-n*m; i++)
        {
            unordered_map<string,int> hash;
            for(int j=0; j<n; j++)
            {
                string st = s.substr(i+j*m,m);
                if(check.find(st) != check.end())
                    hash[st]++;
                
            }
            if(hash == check)
                ans.push_back(i);
        }
        return ans;
    }
};
