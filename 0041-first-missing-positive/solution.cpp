class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        map<int,int> hash;
        for(int i=0; i<nums.size(); i++)
            if(nums[i]>0)
                hash[nums[i]]++;
        
        int last = 0;
        for(auto it:hash)
        {
            if(it.first-last>1)
                break;
            last = it.first;
        }
        return last+1;
    }
};
