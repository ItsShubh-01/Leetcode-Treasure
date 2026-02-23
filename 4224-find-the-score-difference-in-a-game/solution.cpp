class Solution {
public:
    int scoreDifference(vector<int>& nums) 
    {
        bool First = true;
        int First_Score = 0;
        bool Second = false;
        int Second_Score = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2)
            {
                First = !First;
                Second = !Second;
            }
            if((i+1)%6==0)
            {
                First = !First;
                Second = !Second;
            }
            if(First)
                First_Score+=nums[i];
            else
                Second_Score+=nums[i];
        }
        return First_Score - Second_Score;
    }
};
