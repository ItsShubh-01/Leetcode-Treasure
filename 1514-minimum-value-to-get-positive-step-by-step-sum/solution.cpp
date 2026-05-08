class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini = INT_MAX, sum=0;
        for(const int& i:nums){
            sum+=i;
            mini = min(mini, sum);
        }
        return mini<0 ? abs(mini)+1 : 1;
    }
};
