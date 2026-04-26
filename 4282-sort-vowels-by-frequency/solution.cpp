class Solution {
public:
    string sortVowels(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        string temp = s;
        
        unordered_map<char, int> count;
        unordered_map<char, int> fst_occ;
        
        for (int i = 0; i < temp.size(); i++) {
            char ch = temp[i];
            if (vowels.count(ch)) {
                count[ch]++;
                if (fst_occ.find(ch) == fst_occ.end())
                    fst_occ[ch] = i;
            }
        }
        
        vector<char> uniqueVowels;
        for (auto& [ch, _] : count)
            uniqueVowels.push_back(ch);
        
        sort(uniqueVowels.begin(), uniqueVowels.end(), [&](char a, char b) {
            if (count[a] != count[b])
                return count[a] > count[b];
            return fst_occ[a] < fst_occ[b];
        });
        
        vector<char> sortedVowels;
        for (char v : uniqueVowels)
            for (int i = 0; i < count[v]; i++)
                sortedVowels.push_back(v);
        
        int vowelInd = 0;
        for (int i = 0; i < (int)s.size(); i++)
            if (vowels.count(s[i]))
                s[i] = sortedVowels[vowelInd++];
        
        return s;
    }
};
