class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) 
    {
        map<int,int> mp;
        for(int num : nums)
            mp[num]++;

        map<int,int> freqCount;
        for(auto &p : mp)
            freqCount[p.second]++;

        for(int num : nums)
        {
            if(freqCount[mp[num]] == 1)
                return num;
        }

        return -1;
    }
};

