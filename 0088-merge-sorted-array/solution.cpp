class Solution 
{
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {   
        for(int i=0 ; i<n ; i++)
        {
            nums1.pop_back();
        }

        for(int i=0 ; i<n ; i++)
        {
            int size = nums1.size();

            int start = 0;
            int end = size -1;
            int index = start + (end - start)/2;

            int num = nums2[i];

            while (start <= end)
            {
                if(index == 0 && nums1[index] >= num)
                {
                    break;
                }
                else if(nums1[index] >= num && nums1[index - 1] <= num)
                {
                    break;
                }
                else if(nums1[index] < num)
                {
                    start = index + 1;
                }
                else
                {
                    end = index - 1;
                }
                index = start + (end - start)/2;
            }

            nums1.insert(nums1.begin() + index , nums2[i]);
        }
    }
};
