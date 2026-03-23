class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> hash(nums.size(),0);
        for(int i=0; i<nums.size(); i++)
            hash[nums[i]-1]+=1;
        
        int missing = -1;
        int repeat = -1;
        for(int i=1; i<=nums.size(); i++)
        {
            if(hash[i-1]==0)
                missing = i;
            else if(hash[i-1]==2)
                repeat = i;

            if(missing != -1 && repeat != -1)
                break;
        }
        return {repeat,missing};
    }
};
