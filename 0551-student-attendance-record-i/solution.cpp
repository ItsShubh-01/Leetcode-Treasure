class Solution {
public:
    bool checkRecord(string s) {
        int abs = 0, late = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A') abs++;
            else if(s[i]=='L' && i>1)
            {
                if(s[i-1]=='L' && s[i-2]=='L')
                    return false;
            }
            if(abs==2) return false;
        }
        return true;
    }
};
