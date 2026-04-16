class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> arr(32,0);
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<32; j++)
                if((int)(nums[i]&(1<<j)))
                    arr[j]++;
        }
        int val = 0;
        for(int i=0; i<arr.size(); i++)
            if(arr[i]%3==1)
                val+=(1<<i);
        return val;
    }
};
