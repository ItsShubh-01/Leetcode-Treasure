class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        int ind = 0;
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i][0]<=end)
                end = max(end,intervals[i][1]);
            else{
                intervals[ind++] = {start,end};
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        intervals[ind++] = {start,end};
        vector<vector<int>> ans(intervals.begin(),intervals.begin()+ind);
        return ans;
    }
};
