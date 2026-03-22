class Solution {
public:
    bool uniformArray(vector<int>& nums1)
    {
        int n = nums1.size();
        bool allEven = true;
        for(int i=0; i<n; i++)
            if(nums1[i]%2==1){
                allEven = false;
                break;
            }
        if(allEven)
            return true;

        int minimum = INT_MAX;
        for(int i=0; i<n; i++)
            if(nums1[i]<minimum)
                minimum = nums1[i];
        if(minimum%2==1)
            return true;
        else
            return false;
    }
};
