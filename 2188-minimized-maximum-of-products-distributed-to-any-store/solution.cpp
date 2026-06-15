class Solution {
public:
    int f(const vector<int>& nums, int n){
        int count = 0;
        for(int i=0; i<nums.size(); i++)
            count+= (nums[i]+n-1)/n;
        return count;
    }
    int minimizedMaximum(int n, vector<int>& nums) {
        int start = 1, end = *max_element(nums.begin(), nums.end());
        int ans = end;
        while(start<=end) {
            int mid = start + (end - start)/2;

            int val = f(nums, mid);
            if(val<=n) {ans = mid; end = mid-1;}
            else start = mid+1;
        }
        return ans;
    }
};
