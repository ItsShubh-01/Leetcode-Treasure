class Solution {
public:
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size(), m=queries.size();
        vector<int> ans;
        vector<long long> close, forward(n), backward(n);
        map<pair<int,int>,int> dp;
        
        for(int i=0; i<n; i++){
            if(i==0) close.push_back(1);
            if(i>0 && i<n-1){
                if(nums[i]-nums[i-1]>nums[i+1]-nums[i])
                    close.push_back(1);
                else close.push_back(0);
            }
            if(i==n-1) close.push_back(0);
        }

        for(int i=0; i<n; i++){
            if(i==0) forward[0]=1;
            else if(i==n-1) forward[n-1]=forward[n-2];
            else{
                if(close[i]) forward[i]=forward[i-1]+1;
                else forward[i]=forward[i-1]+nums[i+1]-nums[i];
            }
        }
        for(int i=n-1; i>=0; i--){
            if(i==0) backward[0]=backward[1];
            else if(i==n-1) backward[n-1]=1;
            else{
                if(close[i]==0) backward[i]=backward[i+1]+1;
                else backward[i]=backward[i+1]+nums[i]-nums[i-1];
            }
        }

        for(int i=0; i<m; i++){
            int start = queries[i][0], end = queries[i][1];
            if(start==end) ans.push_back(0);
            else if(start<end){
                if(start==0) ans.push_back(forward[end-1]);
                else ans.push_back(forward[end-1]-forward[start-1]);
            }
            else{
                if(start==n-1) ans.push_back(backward[end+1]);
                else ans.push_back(backward[end+1]-backward[start+1]);
            }
        }
        return ans;
    }
};
