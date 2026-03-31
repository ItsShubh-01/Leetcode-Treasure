class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int,int> hash;
        for(int i=0; i<nums1.size(); i++)
            hash[nums1[i]]++;

        vector<int> arr;
        for(int i=0; i<nums2.size(); i++)
            if(hash[nums2[i]]!=0)
            {
                arr.push_back(nums2[i]);
                hash[nums2[i]]=0;
            }
        return arr;
    }
};
