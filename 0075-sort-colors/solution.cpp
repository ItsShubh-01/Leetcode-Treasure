class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_r = 0;
        int count_w = 0;
        int count_b = 0;
        for(int I=0; I<nums.size();I++) {
            if(nums[I] == 0) count_r++;
            if(nums[I] == 1) count_w++;
            if(nums[I] == 2) count_b++;
        }
        vector<int> arr;
        for(int I=0 ; I<count_r ; I++){
            arr.push_back(0);
        }
        for(int j=0 ; j<count_w ; j++){
            arr.push_back(1);
        }
        for(int k=0 ; k<count_b ; k++){
            arr.push_back(2);
        }
        for(int x=0 ; x<arr.size() ; x++){
            nums[x] = arr[x];
        }
    }
};
