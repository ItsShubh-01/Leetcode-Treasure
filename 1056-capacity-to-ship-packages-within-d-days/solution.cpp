class Solution {
public:
    int check(const vector<int> &arr, int n){
        int count = 0, sum=0;
        for(int i=0; i<arr.size(); i++)
            if(sum+arr[i]<=n) sum+=arr[i];
            else {count++;sum=arr[i];}
        if(sum>0) count++;
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0, maxi=0;
        for(int &i:weights) {sum+=i; maxi=max(maxi,i);}

        int start = maxi, end = sum;
        int ans = -1;
        while(start<=end){
            int mid = start+(end-start)/2;

            int count = check(weights, mid);
            if(count>days) start = mid+1;
            else if(count<=days) {ans = mid; end = mid-1;}
        }
        return ans;
    }
};
