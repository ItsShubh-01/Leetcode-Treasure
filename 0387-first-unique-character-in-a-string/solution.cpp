class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int> indexes;
        for(int i=97 ; i<=122 ; i++)
        {
            int index;
            int count = 0;
            for(int j=0 ; j<s.size() ; j++)
            {
                if(char(i) == s[j])
                {
                    index = j;
                    count ++;
                    if(count > 1) break;
                }
            }
            if(count == 1) indexes.push_back(index);
        }
        if(indexes.size() == 0)
        {
            return -1;
        }
        int ans = indexes[0];
        for(int i=1 ; i<indexes.size() ; i++)
        {
            if(indexes[i] < ans)
            {
                ans = indexes[i];
            }
        }
        return ans;
    }
};
