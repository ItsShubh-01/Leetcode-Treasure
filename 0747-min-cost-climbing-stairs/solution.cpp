class Solution {
public:
    unordered_map<int,int> hash;
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        hash[0]=cost[0];
        hash[1]=cost[1];
        for(int i=2; i<n; i++)
            hash[i]=min(cost[i]+hash[i-1],cost[i]+hash[i-2]);
        return min(hash[n-1],hash[n-2]);
    }
};
