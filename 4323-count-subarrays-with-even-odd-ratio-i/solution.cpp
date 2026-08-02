class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size(), count=0;
        for(int i=0; i<n; i++) {
            float even=0, odd=0;
            for(int j=i; j<n; j++) {
                if(nums[j]%2) odd++;
                else even++;

                if(odd>0 && (even/odd)<=(float)a/(float)b) count++;
            }
        }
        return count;
    }
};
