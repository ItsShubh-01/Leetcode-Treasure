class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i=start, j=start;
        while(i<nums.size() || j>=0)
        {
            if(i<nums.size() && nums[i]==target)
                return abs(i-start);
            else if(j>=0 && nums[j]==target)
                return abs(j-start);

            i++;
            j--;
        }
        return -1;
    }
};
