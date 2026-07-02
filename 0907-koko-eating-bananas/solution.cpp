class Solution {
public:
    bool check(int val, int& h, vector<int>& arr){
        long long count=0;
        for(int& i:arr){
            if(i%val) count+=(i/val)+1;
            else count+=i/val;
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1, j=*max_element(piles.begin(), piles.end()), ans=-1;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(check(mid, h, piles)) {ans=mid; j=mid-1;}
            else i=mid+1;
        }
        return ans;
    }
};
