class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> hash;
        for(char &ch:text) hash[ch]++;
        return min({hash['b'], hash['a'], hash['n'], hash['l']/2, hash['o']/2});
    }
};
