class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        for(int i=0; i<m; i++)
            sort(grid[i].begin(),grid[i].end());

        int ans = 0;
        for(int i=n-1; i>=0; i--)
        {
            int max_val = INT_MIN;
            for(int j=0; j<m; j++)
                max_val = max(max_val,grid[j][i]);
            
            ans+=max_val;
        }
        return ans;
    }
};
