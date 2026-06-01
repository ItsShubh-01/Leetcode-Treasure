class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int costs = 0, count=1;
        for(int i=cost.size()-1; i>=0; i--){
            if(count<3) {costs+=cost[i];count++;}
            else count=1;
        }
        return costs;
    }
};
