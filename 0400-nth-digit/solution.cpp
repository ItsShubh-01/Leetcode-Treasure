class Solution {
public:
    int findNthDigit(int n) {
        long long digits = 1;
        long long count = 9;
        long long start = 1;

        // Step 1: find the digit-length block
        while (n > digits * count) {
            n -= digits * count;
            digits++;
            count *= 10;
            start *= 10;
        }

        // Step 2: find the exact number
        start += (n - 1) / digits;

        // Step 3: find the exact digit
        string s = to_string(start);
        return s[(n - 1) % digits] - '0';
    }
};
