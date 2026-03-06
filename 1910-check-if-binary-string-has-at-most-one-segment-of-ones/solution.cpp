class Solution {
public:
    bool checkOnesSegment(string s)
    {
        bool OneSegmentCompleted = false;
        for(const char& ch:s)
        {
            if(OneSegmentCompleted && ch=='1')
                return false;
            else if(ch=='0')
                OneSegmentCompleted = true;
        }
        return true;
    }
};
