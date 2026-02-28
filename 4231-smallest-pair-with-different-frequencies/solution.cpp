class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) 
    {
        map<int,int> mp;
        for(int num:nums)
            mp[num]++;

        vector<int> arr;
        int freq;
        for(const auto& it:mp)
        {
            if(arr.size()==0)
            {
                arr.push_back(it.first);
                freq = it.second;
            }
            else if(it.second!=freq)
            {    
                arr.push_back(it.first);
                break;
            }
        }
        if(arr.size()==1)
                return {-1,-1};
        return arr;
    }
};
