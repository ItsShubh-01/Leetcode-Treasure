class Solution {
public:
    bool check(string& s, int start, int end)
    {
        while(start<end)
            if(s[start++]!=s[end--])
                return false;
        return true;
    }
    bool validPalindrome(string s)
    {
        int i=0, j=s.size()-1;
        while(i<j)
            if(s[i++]!=s[j--])
                return (check(s,i,j+1) || check(s,i-1,j));
        return true;
    }
};
