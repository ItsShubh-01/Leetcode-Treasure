class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0, j=0, count=0;
        unordered_map<char, int> hash;
        for(int i=0; i<s.size(); i++){
            hash[s[i]]++;
            while(hash['a']>0 && hash['b']>0 && hash['c']>0){
                count+=s.size()-i;
                hash[s[j++]]--;
            }
        }
        return count;
    }
};
