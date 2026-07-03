class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count=1;
        map<int, vector<int>> cnt;
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]){
                cnt[count].push_back(nums[i-1]);
                count=1;
            }
            else count++;
        }
        cnt[count].push_back(nums.back());

        for (auto it = cnt.begin(); it != cnt.end(); it++) {
            cout << it->first << " ";
        }
        vector<int> ans; count=0;
        for(auto it = cnt.rbegin(); it != cnt.rend(); ++it){
            for(int i:it->second) {
                ans.push_back(i);
                count++;
                if(count==k) break;
            }  
            if(count==k) break;
        }
        return ans;
    }
};
