class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        vector<int> big;
        big.push_back(0);
        int bigi=0;
        for(int i=n-1; i>0; i--) {
            bigi = max(bigi, nums[i]);
            big.push_back(bigi);
        }
        reverse(big.begin(), big.end());

        int maxi=0, count=0;
        for(int i=0; i<n; i++) {
            if(nums[i]<=big[i]) {
                maxi=max(maxi, nums[i]);
                count+=maxi-nums[i];
            }
            else maxi=big[i];
        }
        return count;
    }
};
