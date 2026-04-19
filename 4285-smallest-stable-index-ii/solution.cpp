class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> hash;
        for(int i=0; i<n; i++)
            hash[nums[i]]++;

        int maxi = INT_MIN;
        for(int i=0; i<n; i++)
        {
            maxi = max(maxi, nums[i]);
            int mini;
            for(auto it:hash){
                if(it.second){
                    mini = it.first;
                    break;
                }
            }
            if(maxi-mini<=k)
                return i;
            hash[nums[i]]--;
        }
        return -1;
    }
};
