class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp(nums.size(), 1), hash(nums.size());
        int maxi = 1, lastInd=0;
        for(int i=0; i<nums.size(); i++){
            hash[i]=i;
            for(int j=0; j<i; j++)
                if(nums[i]%nums[j]==0){
                    if(temp[j]+1>temp[i]){
                        temp[i]=temp[j]+1;
                        hash[i]=j;
                    }
                    if(temp[i]>maxi){
                        maxi = temp[i];
                        lastInd = i;
                    }
                }
            }
        vector<int> ans;
        ans.push_back(nums[lastInd]);
        while(hash[lastInd]!=lastInd){
            lastInd = hash[lastInd];
            ans.push_back(nums[lastInd]);
        }
        return ans;
    }
};
