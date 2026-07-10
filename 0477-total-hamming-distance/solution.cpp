class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size(), total = 0;
        for (int i = 0; i < 32; ++i) {
            int one_bits = 0;
            for (int num : nums) one_bits += (num >> i) & 1;
            total += one_bits * (n - one_bits); 
        }
        return total;
    }
};
