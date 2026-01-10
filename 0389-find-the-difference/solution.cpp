class Solution 
{
public:
    char findTheDifference(string s, string t) 
    {
        for(int i=0 ; i<s.size() ; i++)
        {
            for(int j=0 ; j<t.size();)
            {
                if(s[i] == t[j])
                {
                    t.erase(j,1);
                    break;
                }
                if(s[i] != t[j]) j++;
            }
        }
        return t[0];
    }
};
