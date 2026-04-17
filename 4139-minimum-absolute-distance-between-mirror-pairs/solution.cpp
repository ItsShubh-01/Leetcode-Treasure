class Solution {
public:
    int rev(int num)
    {
        int val = 0;
        while(num>0){
            val = val*10 + (num%10);
            num/=10;
        }
        return val;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums. size();
        int minDist = n+1;
        unordered_map<int,int> hash;

        for(int i=0; i<n; i++)
        {
            if(hash.count(nums[i]))
                minDist = min(minDist, i-hash[nums[i]]);
            hash[rev(nums[i])]=i;
            if(minDist==1) return 1;
        }
        return minDist!=n+1 ? minDist : -1;
    }
};
