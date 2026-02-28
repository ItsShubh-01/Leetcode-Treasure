class Solution {
public:
    string mergeCharacters(string s, int k)
{
    map<char, int> mp;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] >= 2)
        {
            bool inRange = false;
            for (int j = 1; j <= k; j++)
            {
                if (i - j >= 0 && s[i] == ans[ans.size() - j])
                {
                    inRange = true;
                    break;
                }
            }
            mp[s[i]]--;
            if (inRange)
                continue;
        }
        ans += s[i];
    }
    return ans;
}
};
