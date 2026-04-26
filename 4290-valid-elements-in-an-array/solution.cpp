class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int maxAll = -1;
        if(n>2) maxAll = *max_element(nums.begin()+1,nums.end());
        int maxi = nums[0];
        ans.push_back(nums[0]);
        for(int i=1; i<n-1; i++)
        {
            if(nums[i]==maxAll)
                maxAll = *max_element(nums.begin()+i+1, nums.end());
            if(nums[i]>maxi || nums[i]>maxAll)
                ans.push_back(nums[i]);
            maxi = max(maxi, nums[i]);
        }
        if(n>1) ans.push_back(nums[n-1]);
        return ans;
    }
};
