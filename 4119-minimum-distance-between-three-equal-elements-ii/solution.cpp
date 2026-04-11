class Solution {
public:
    int minimumDistance(vector<int>& nums) 
    {
        int min_dist = INT_MAX;
        unordered_map<int, pair<int,int>> mp;

        for(int i = 0; i < nums.size(); i++)
        {
            if(mp.count(nums[i]))
            {
                auto &[last, second_last] = mp[nums[i]];
                if(second_last != -1)
                    min_dist = min(min_dist, 2 * (i - second_last));
                second_last = last;
                last = i;
            }
            else
                mp[nums[i]] = {i, -1};
        }
        return (min_dist == INT_MAX) ? -1 : min_dist;
    }
};
