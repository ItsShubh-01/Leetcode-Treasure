class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<long long>> hash;
        for(int i=0; i<n; i++)
        {
            if(hash.find(nums[i])==hash.end())
                hash[nums[i]].push_back(i);
            else
                hash[nums[i]].push_back(i+hash[nums[i]].back());
        }
        
        vector<long long> result;
        unordered_map<int,long long> count;
        for(int i=0; i<n; i++)
        {
            long long cnt = count[nums[i]];
            vector<long long>& arr = hash[nums[i]];
            long long val = ((cnt+1)*i) - arr[cnt] + (arr.back()-arr[cnt]) - ((arr.size()-cnt-1)*i);
            count[nums[i]]++;
            result.push_back(val);
        }
        return result;
    }
};
