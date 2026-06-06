class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> arr;
        int left = 0, right = 0;
        for(int &i:nums) right+=i;
        for(int i=0; i<nums.size(); i++){
            right-=nums[i];
            arr.push_back(abs(left-right));
            left+=nums[i];
        }
        return arr;
    }
};
