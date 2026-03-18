class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> arr;
        int left = 0;
        int right = nums.size()-1;

        while(left<=right)
        {
            if(abs(nums[left])>=abs(nums[right]))
                arr.push_back(nums[left]*nums[left++]);
            else
                arr.push_back(nums[right]*nums[right--]);
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};
