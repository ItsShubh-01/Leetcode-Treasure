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
        for(int i=0; i<arr.size(); i++)
            nums[i]=arr[i];
        return arr.size();
    }
};
