class Solution {
public:
    int minOperations(string s)
    {
        int count = 0;
        bool start = s[0]-'0';
        for(const char& ch:s)
        {
            if((ch-'0') != start)
                count++;
            
            start = !start;
        }
        if(count>(s.size()/2))
            return s.size()-count;
        else
            return count;
    }
};
