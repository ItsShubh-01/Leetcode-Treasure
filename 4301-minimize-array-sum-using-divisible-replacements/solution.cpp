class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<long long, long long> hash;
        for(int i=0; i<n; i++)
            hash[nums[i]]++;

        sort(nums.begin(), nums.end());
        long long sum = 0;
        for(int i=n-1; i>=0; i--){
            int x = nums[i];
            if(hash.count(x)==0) continue;
            int best = x;
            for(int j=1; j*j<=x; j++){
                if(x%j) continue;

                if(hash.count(j))
                    best = min(best, j);
                if(hash.count(x/j))
                    best = min(best, x/j);
            }
            sum+=best;
        }
        return sum;
    }
};
