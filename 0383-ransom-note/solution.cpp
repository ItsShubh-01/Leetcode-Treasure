class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hash;
        for(int i=0; i<ransomNote.size(); i++)
            hash[ransomNote[i]]++;
        for(int i=0; i<magazine.size(); i++)
            hash[magazine[i]]--;
        for(auto it:hash) 
            if(it.second>0)
                return false;
        return true;
    }
};
