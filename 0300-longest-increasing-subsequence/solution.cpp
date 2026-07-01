class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            if(arr.empty() || nums[i]>arr.back()) arr.push_back(nums[i]);
            else{
                int ind = lower_bound(arr.begin(), arr.end(), nums[i]) - arr.begin();
                arr[ind]=nums[i];
            }
        }
        return arr.size();
    }
};
