class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end()), ans=-1;
        while(low<=high){
            int mid= low+(high-low)/2;

            long long count=0;
            for(int& i:nums) count+=(i+mid-1)/mid;
            if(count<=threshold) {ans=mid; high = mid-1;}
            else low=mid+1;
        }
        return ans;
    }
};
