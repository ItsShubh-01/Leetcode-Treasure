class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int> arr;
        for(int i:nums)
        {
            if(i!=val)
                arr.push_back(i);
        }
        nums.clear();
        for(int j:arr)
            nums.push_back(j);
        
        return nums.size();
    }
};
