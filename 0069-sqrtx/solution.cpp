class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int ans;
        int start = 1;
        int end = x;
        int mid = start+(end - start)/2;

        while(start<=end)
        {
            if(mid<=x/mid){
                ans = mid;
                start = mid+1;
            }
            else if(mid>=x/mid)
                end = mid-1;
            
            mid = start+(end - start)/2;
        }
        return ans;
    }
};
