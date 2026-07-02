class Solution {
public:
    int check(int val, int k, vector<int>& arr){
        int count=0, sum=0;
        for(int& i:arr){
            if(sum+i<val) sum+=i;
            else if(sum+i==val) {count++; sum=0;}
            else{
                count++;
                sum=i;
            }
            if(count>k) return count;
        }
        if(sum>0) count++;
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int start=0, end=0, ans=0;
        for(int& i:nums) {start=max(start, i); end+=i;}
        while(start<=end){
            int mid = start + (end-start)/2;

            int count = check(mid, k, nums);
            if(count<=k) {ans=mid; end=mid-1;}
            else start = mid+1;
        }
        return ans;
    }
};
