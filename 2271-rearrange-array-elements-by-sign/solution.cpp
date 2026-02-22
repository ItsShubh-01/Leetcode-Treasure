class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int pos = 0;
        int neg = 0;
        bool positive = true;

        vector<int> arr;
        while(pos<nums.size() && neg<nums.size())
        {
            if(positive)
            {
                if(nums[pos] >= 0){
                    arr.push_back(nums[pos++]);
                    positive = false;
                }
                else
                    pos++;
            }
            else
            {
                if(nums[neg] < 0){
                    arr.push_back(nums[neg++]);
                    positive = true;
                }
                else
                    neg++;
            }
        }
        while(neg<nums.size())
        {
            if(nums[neg]<0)
                arr.push_back(nums[neg++]);
            else
                neg++;
        }
        return arr;
    }
};
