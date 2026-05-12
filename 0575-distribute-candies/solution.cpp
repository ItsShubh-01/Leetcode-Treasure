class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> hash;
        for(const int& i:candyType) hash[i]++;
        int n = candyType.size();
        int num = hash.size();
        if(num>n/2) return n/2;
        else return num;
    }
};
