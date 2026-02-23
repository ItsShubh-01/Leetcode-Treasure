class Solution {
public:
    int binaryGap(int n)
    {
        int max_count = 0;
        int count = 0;
        bool isCounting = false;

        while (n > 0)
        {
            if (n % 2 && !isCounting)
            {
                count++;
                isCounting = true;
            }
            else if (n % 2 && isCounting)
            {
                max_count = max(max_count, count);
                count = 1;
            }
            else if (n % 2 == 0 && isCounting)
                count++;

            n /= 2;
        }
        return max_count;
    }
};
