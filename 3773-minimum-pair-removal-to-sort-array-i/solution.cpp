class Solution {
public:
    bool isSorted(vector<int> arr)
    {
        for(int i=0 ; i<arr.size()-1 ; i++)
        {
            if(arr[i] > arr[i+1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) 
    {
        int count = 0;
        while(isSorted(nums) == false)
        {
            int min_sum = INT_MAX;
            int index = 0;
            for(int i=0 ; i<nums.size()-1; i++) 
            {
                if(nums[i]+nums[i+1] < min_sum)
                {
                    min_sum = nums[i]+nums[i+1];
                    index = i;
                }
            }
            count ++;
            nums.erase(nums.begin()+index , nums.begin()+index+2);
            nums.insert(nums.begin()+index,min_sum);
        }
        return count;
    }
};
