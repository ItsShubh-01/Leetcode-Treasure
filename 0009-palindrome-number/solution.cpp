class Solution {
public:
    bool isPalindrome(int x) {

        int num = x;
        int rev_num = 0;
        while(num!=0)
        {
            int value = num%10;
            if(rev_num <= INT_MAX/10 - 9 && rev_num > INT_MIN/10 -9)
            {
                rev_num = rev_num*10 + value;
            }
            num = num/10;
        }

        if(x == rev_num && x>=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
