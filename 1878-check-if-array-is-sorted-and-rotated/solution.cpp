class Solution 
{public:

bool check(vector<int>& nums) 
{
    int size = nums.size();
    bool is_pivot = false;
    int pivot_index;
    for(int i=0 ; i<size-1 ; i++)
    {
        if(nums[i] > nums[i+1])
        {
            is_pivot = true;
            pivot_index = i+1;
            break;
        }
    }

    bool Is_Sorted = true;

    if(not is_pivot)
    {
        return Is_Sorted;
    }

    for(int i=pivot_index ; i<size-1 ; i++)
    {
        if(nums[i] > nums[i+1])
        {
            Is_Sorted = false;
            break;
        }
    }

    if(nums[size-1] <= nums[0])
    {
        for(int i=0 ; i<pivot_index-1 ; i++)
        {
            if(nums[i] > nums[i+1])
            {
                Is_Sorted = false;
                break;
            }
        }
    }
    else
    {
        Is_Sorted = false;
    }
    return Is_Sorted;
}
};
