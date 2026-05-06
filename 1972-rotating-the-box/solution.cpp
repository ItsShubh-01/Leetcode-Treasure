class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size(), m = boxGrid[0].size();
        vector<vector<char>> ans(m);
        for(int i=n-1; i>=0; i--){
            vector<char> arr;
            int stones = 0, empty = 0, ind=0;
            for(int j=0; j<m; j++){
                if(boxGrid[i][j]=='#') stones++;
                else if(boxGrid[i][j]=='.') empty++;
                else{
                    while(empty>0) {ans[ind++].push_back('.');empty--;}
                    while(stones>0) {ans[ind++].push_back('#');stones--;}
                    ans[ind++].push_back('*');
                }
            }
            while(empty>0) {ans[ind++].push_back('.');empty--;}
            while(stones>0) {ans[ind++].push_back('#');stones--;}
        }
        return ans;
    }
};
