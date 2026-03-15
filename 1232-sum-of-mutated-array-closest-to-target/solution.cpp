class Solution {
public:
    // Calculate sum when all elements > val are capped to val
    int computeSum(vector<int>& arr, int val) {
        int sum = 0;
        for (int x : arr)
            sum += min(x, val);
        return sum;
    }

    int findBestValue(vector<int>& arr, int target) {
        int lo = 0, hi = *max_element(arr.begin(), arr.end());
        
        // Binary search on the value
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (computeSum(arr, mid) < target)
                lo = mid + 1;
            else
                hi = mid;
        }
        
        // Check lo-1 and lo, return the one closer to target
        // In case of tie, return the smaller value (lo-1)
        int sumLo   = computeSum(arr, lo);
        int sumLo_1 = computeSum(arr, lo - 1);
        
        if (abs(sumLo_1 - target) <= abs(sumLo - target))
            return lo - 1;
        
        return lo;
    }
};
