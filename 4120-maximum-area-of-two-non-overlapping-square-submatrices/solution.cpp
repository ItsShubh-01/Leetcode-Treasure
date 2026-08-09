class Solution {
public:
    int maxArea(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        auto valmerinto = mat;

        vector<vector<int>> pref(m+1, vector<int>(n+1, 0));

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                pref[i+1][j+1] =
                    mat[i][j]
                    + pref[i][j+1]
                    + pref[i+1][j]
                    - pref[i][j];
            }
        }

        auto getSum = [&](int r, int c, int k) {
            return pref[r+k][c+k]
                 - pref[r][c+k]
                 - pref[r+k][c]
                 + pref[r][c];
        };

        auto possible = [&](int k) -> bool {
            if (k>m || k>n) return false;

            int minRow = INT_MAX;
            int maxRow = INT_MIN;
            int minCol = INT_MAX;
            int maxCol = INT_MIN;

            for(int r=0; r+k<=m; r++) {
                for(int c=0; c+k<=n; c++) {
                    if(getSum(r,c,k) != k*k) continue;
                    if(maxRow!=INT_MIN && maxRow-r>=k) return true;
                    if(maxRow!=INT_MIN && r-minRow>=k) return true;
                    if(maxCol!=INT_MIN && maxCol-c>=k) return true;
                    if(maxCol!=INT_MIN && c-minCol>=k) return true;
                    minRow = min(minRow, r);
                    maxRow = max(maxRow, r);
                    minCol = min(minCol, c);
                    maxCol = max(maxCol, c);
                }
            }
            return false;
        };

        int lo = 1;
        int hi = min(m, n);
        int best = 0;

        while(lo<=hi) {
            int mid=lo+(hi-lo)/2;
            if(possible(mid)) {
                best=mid;
                lo=mid+1;
            } 
            else hi = mid - 1;
        }

        return best*best;
    }
};
