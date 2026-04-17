class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size(), m = queries.size();
        unordered_map<int,vector<int>> hash;
        for(int i=0; i<n; i++)
            hash[nums[i]].push_back(i);

        vector<int> ans;
        for(int i=0; i<m; i++)
        {
            vector<int>& arr = hash[nums[queries[i]]];
            if(arr.size()==1)
                ans.push_back(-1);
            else{
                int ind = lower_bound(arr.begin(),arr.end(),queries[i]) - arr.begin();
                int next_ind = (ind+1)%arr.size();
                int prev_ind = (ind-1+arr.size())%arr.size();
                int dist1, dist2;
                if(next_ind>ind)
                    dist1 = arr[next_ind]-arr[ind];
                else
                    dist1 = arr[next_ind] + n-arr[ind];
                if(prev_ind<ind)
                    dist2 = arr[ind] - arr[prev_ind];
                else
                    dist2 = arr[ind] + n - arr[prev_ind];
                ans.push_back(min(dist1,dist2));
            }
        }
        return ans;
    }
};
