class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        int maxi = 0;
        map<int,int> hash;
        for(int i:nums) hash[i]++;

        int count = 1;
        for(auto it:hash)
        {
            if(hash[it.first-1]) count++;
            else count = 1;
            maxi = max(maxi, count);
        }
        return maxi;
    }
};
