class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        for(int i:nums)
        {
            if(arr.empty() || i!=arr.back())
                arr.push_back(i);
        }
        nums.clear();
        for(int i:arr) nums.push_back(i);
        return nums.size();
    }
};
