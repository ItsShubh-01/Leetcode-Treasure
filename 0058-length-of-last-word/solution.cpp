class Solution {
public:
    int lengthOfLastWord(string s) {
        bool wordstarted = false;
        int count = 0;
        for(int i=s.size()-1 ; i>=0 ; i--)
        {

            if(s[i]==' ' && !wordstarted)
                continue;
            else if(s[i]!=' ')
            {
                count++;
                wordstarted = true;
            }
            
            if(i==0 || s[i]==' ' && wordstarted)
                return count;
        }
        return -1;
    }
};
