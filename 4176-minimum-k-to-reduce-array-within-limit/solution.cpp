class Solution {
public:
    int minimumK(vector<int>& nums) 
    {
        int maxnum = INT_MIN;
        for(int i=0 ; i<nums.size() ; i++) maxnum = max(maxnum,nums[i]);
        int start = 1;
        int end = maxnum;
        long long mid;long long count;
        while(start <= end)
        {
            mid = start+(end - start)/2;
            count = 0;
            for(int i=0 ; i<nums.size() ; i++)
            {
                if(nums[i]%mid == 0) count += nums[i]/mid;
                else count += (nums[i]/mid) +1;
            }
            if(count > mid*mid) start=mid+1;
            if(count <= mid*mid) end=mid-1;
        }
        while(true)
        {
            if(count <= mid*mid) return mid;
            if(count > mid*mid) mid++;
            count = 0;
            for(int i=0 ; i<nums.size() ; i++)
            {
                if(nums[i]%mid == 0) count += nums[i]/mid;
                else count += (nums[i]/mid) +1;
            }
        }
    }
};
