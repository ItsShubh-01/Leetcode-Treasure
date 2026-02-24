class Solution {
public:
    int prefixConnected(vector<string>& words, int k) 
    {
        unordered_map<string_view,int> hash;
        hash.reserve(words.size());
        int count = 0;
        for(const string& s:words)
            if(s.size()>=k){
                auto key = string_view(s.data(), k);
                if(++hash[key]==2)
                    count++;
            }
        return count;
    }
};
