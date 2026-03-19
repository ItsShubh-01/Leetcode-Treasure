class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last_seen;
        int max_count = 0;
        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            if (last_seen.count(s[i]))
                j = max(j, last_seen[s[i]] + 1);
            last_seen[s[i]] = i;
            max_count = max(max_count, i - j + 1);
        }
        return max_count;
    }
};
