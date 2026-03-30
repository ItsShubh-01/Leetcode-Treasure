class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,int> hash_odd;
        unordered_map<char,int> hash_even;

        for(int i=0; i<s1.size(); i++)
        {
            if(i%2==0)
                hash_even[s1[i]]++;
            else
                hash_odd[s1[i]]++;
        }
        for(int i=0; i<s2.size(); i++)
        {
            if(i%2==0)
                hash_even[s2[i]]--;
            else
                hash_odd[s2[i]]--;
        }

        for(auto it:hash_odd)
            if(it.second!=0)
                return false;
        for(auto it:hash_even)
            if(it.second!=0)
                return false;
        return true;
    }
};
