class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            int maxi = -1;
            int j=(i+1)%nums.size();
            while(j!=i){
                if(nums[j]>nums[i]) {
                    maxi = nums[j];
                    break;
                }
                j++;
                j%=nums.size();
            }
            arr.push_back(maxi);
        }
        return arr;
    }
};
