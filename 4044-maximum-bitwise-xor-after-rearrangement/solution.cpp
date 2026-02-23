class Solution {
public:
    string maximumXor(string s, string t) 
    {
        int count_s_0 = 0;
        int count_s_1 = 0;
        for(char ch:s)
        {
            if(ch=='0')
                count_s_0++;
            else
                count_s_1++;
        }

        int count_t_0 = 0;
        int count_t_1 = 0;
        for(char ch:t)
        {
            if(ch=='0')
                count_t_0++;
            else
                count_t_1++;
        }

        int rem1from1 = 0;
        if(count_s_1 > count_t_0)
            rem1from1+= count_t_0;
        else
            rem1from1 += count_s_1;
        int get1from0 = 0;
        if(count_s_0 > count_t_1)
            get1from0 += count_t_1;
        else 
            get1from0 += count_s_0;

        string ans;
        for(char ch:s)
        {
            if(ch=='1' && rem1from1)
            {
                ans += '1';
                rem1from1--;
            }
            else if(ch=='0' && get1from0)
            {
                ans += '1';
                get1from0--;
            }
            else
                ans+='0';
        }
        return ans;
    }
};
