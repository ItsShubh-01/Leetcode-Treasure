class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(ranges.begin(),ranges.end());
        int start = -1, end = -1;
        for(int i=0; i<ranges.size(); i++)
        {
            if(left>=ranges[i][0] && left<=ranges[i][1])
            {
                start = ranges[i][0];
                end = max(ranges[i][1],end);
            }
            if(ranges[i][0]<=end+1)
                end = max(end, ranges[i][1]);
            else 
            {
                start = -1; end = -1;
            }
            if(start<=left && end>=right)
                return true;
        }
        if(start<=left && end>=right)
            return true;
        return false;
    }
};
