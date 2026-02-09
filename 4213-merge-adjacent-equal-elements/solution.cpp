class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> arr;

        for (int x : nums) {
            long long val = x;
            while (!arr.empty() && arr.back() == val) 
            {
                val *= 2;
                arr.pop_back();
            }
            arr.push_back(val);
        }
        return arr;
    }
};
