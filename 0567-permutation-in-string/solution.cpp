class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> hash1, hash2;
        int n=s1.size(), m=s2.size();
        if(n>m) return false;
        for(char& ch:s1) hash1[ch]++;

        for(int i=0; i<n; i++) hash2[s2[i]]++;
        int i=0, j=n;
        while(j<m) {
            if(hash1==hash2) return true;
            hash2[s2[i]]--;
            hash2[s2[j++]]++;
            if(hash2[s2[i]] == 0) hash2.erase(s2[i]);
            i++;
        }
        if(hash1==hash2) return true;
        return false;
    }
};
