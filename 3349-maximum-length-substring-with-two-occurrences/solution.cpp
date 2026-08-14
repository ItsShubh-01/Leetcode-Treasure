class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans = 0, i=0, j=0;
        unordered_map<int,int> hash;
        while(i<s.size()) {
            hash[s[i]]++;
            while(hash[s[i]]>2) hash[s[j++]]--;
            ans = max(ans, i-j+1);
            i++;
        }
        return ans;
    }
};
