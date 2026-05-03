class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int even =0, odd = 0;
        for(int i:nums){
            if(i%2==0) even++;
            else odd++;
        }

        vector<int> ans;
        for(int i:nums){
            if(i%2==0){
                ans.push_back(odd);
                even--;
            }
            else{
                ans.push_back(even);
                odd--;
            }
        }
        return ans;
    }
};
