class Solution {
public:
    int minimumCost(vector<int>& nums) 
    {
        vector<int> arr = {51,51,nums[0]};
        for(int i=1 ; i<nums.size() ; i++)
        {
            if(nums[i]<=arr[1]){
                if(nums[i]<=arr[0]){
                    arr[1]=arr[0];arr[0]=nums[i];
                }
                else {arr[1] = nums[i];}
            }
        }
        int sum =0;
        for(int i=0; i<arr.size();i++) sum+= arr[i];
        return sum;
    }
};
