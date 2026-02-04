class Solution {
public:
    string countAndSay(int n) 
    {
        if(n==1) return "1";
        string s = "";
        string t = countAndSay(n-1);

        char ch = t[0];
        int count = 1;
        for(int i=1 ; i<t.size() ; i++)
        {
            if(t[i] == ch)
                count++;
            else
            {
                s+=to_string(count);
                s.push_back(ch);
                ch = t[i];
                count = 1;
            }
        }
        s += to_string(count);
        s.push_back(ch);

        return s;
    }
};
