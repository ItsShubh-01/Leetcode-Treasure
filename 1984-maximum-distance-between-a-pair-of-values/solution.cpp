class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        int max_dist = 0;
        int i=0, j=0;
        while(i<n && j<m)
        {
            while(j<m && nums1[i]<=nums2[j])
                j++;
            max_dist = max(max_dist, j-i-1);
            i++;
        }
        return max_dist;
    }
};
