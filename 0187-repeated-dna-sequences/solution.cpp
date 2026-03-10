class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        if(s.size()<=10)
            return {};
        vector<string> arr;
        unordered_map<string,int> hash;
        for(int i=0; i<=s.size()-10; i++)
        {
            string t(&s[i],10);
            hash[t]++;
            if(hash[t]==2)
                arr.push_back(t);
        }
        return arr;
    }
};
