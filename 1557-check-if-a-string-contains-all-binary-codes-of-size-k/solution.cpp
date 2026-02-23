class Solution {
public:
    bool hasAllCodes(string s, int k)
    {
        if(s.size()<k)
            return false;

        unordered_set<int> st;
        for(int i=0; i<s.size()-k+1; i++)
        {
            string t = s.substr(i,k);
            int num = 0;
            int power = 0;
            for(int j=k-1; j>=0; j--)
            {
                if(t[j]=='1')
                    num+=(1<<power++);
                else
                    power++;
            }
            st.insert(num);
            if(st.size()==(1<<k))
                return true;
        }
        return false;
    }
};
