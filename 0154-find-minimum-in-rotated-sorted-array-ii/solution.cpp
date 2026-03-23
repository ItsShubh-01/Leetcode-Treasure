class Solution {
public:
    int findMin(vector<int>& nums)
    {
        vector<int> arr;
        unordered_map<int,int> hash;

        for(int i=0; i<nums.size(); i++)
        {
            hash[nums[i]]++;
            if(hash[nums[i]]==1)
                arr.push_back(nums[i]);
        }

        int start = 0, end = arr.size()-1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;

            if(arr[mid]==arr[end])
                return arr[mid];
            else if(arr[mid]>arr[end])
            {
                start = mid + 1;
                mid++;
            }
            else
                end = mid;
        }
        return -1;
    }
};
