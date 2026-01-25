class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) 
    {
        vector<int> arr;
        vector<int> pos;
        for(int i=0; i<nums.size() ; i++)
        {
            if(nums[i] >=0) {arr.push_back(0);pos.push_back(nums[i]);}
            else arr.push_back(nums[i]);
        }
        int count =-1;
        for(int i=0 ; i<arr.size() ; i++)
        {
            if(arr[i]==0){
                count++;
                arr[i] = pos[(count+k)%(pos.size())];
            }
        }
        return arr;
    }
};
