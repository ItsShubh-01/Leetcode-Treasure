class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++)
            if(nums[i]==0)
                count++;

        int swaps = 0;
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]!=0 && count>0) {swaps++;count--;}
            else count--;
            if(count==0) break;
        }
        return swaps;
    }
};
