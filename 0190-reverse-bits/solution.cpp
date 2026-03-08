class Solution {
public:
    int reverseBits(int n) {
        bitset<32> b(n);
        string s=b.to_string();
        reverse(s.begin(), s.end());
        int num = stoi(s, 0, 2);
        return num;
    }
};
