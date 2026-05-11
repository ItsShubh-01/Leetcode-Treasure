class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            string s = to_string(nums[i]);
            for(char ch:s) arr.push_back(ch-'0');
        }
        return arr;
    }
};
