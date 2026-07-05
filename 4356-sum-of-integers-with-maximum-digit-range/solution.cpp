class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> arr;
        int maxim = 0;
        for(int i=0; i<nums.size(); i++){
            int temp=nums[i];
            int mini=9, maxi=0;
            while(temp>0) {
                int dig = temp%10;
                temp/=10;
                maxi = max(maxi, dig);
                mini = min(mini, dig);
            }
            arr.push_back(maxi-mini);
            maxim = max(maxim, arr[i]);
        }
        int sum=0;
        for(int i=0; i<nums.size(); i++)
            if(arr[i]==maxim)
                sum+=nums[i];
        return sum;
    }
};
