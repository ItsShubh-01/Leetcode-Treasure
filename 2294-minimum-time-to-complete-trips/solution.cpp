class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long i=0, j=(long long)(*min_element(time.begin(), time.end()))*totalTrips, ans=-1;
        while(i<=j)
        {
            long long sum = 0;
            long long mid = i+(j-i)/2;
            for(int& i:time) {
                sum+=mid/i;
                if(sum>totalTrips) break;
            }
            if(sum>=totalTrips) {ans=mid; j=mid-1;}
            else i=mid+1;
        }
        return ans;
    }
};
