class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> arr;
        for(vector<int>& it:grid) for(int& i:it) arr.push_back(i);
        int i=arr.size()-(k%arr.size());
        for(int j=0; j<grid.size(); j++){
            for(int k=0; k<grid[0].size(); k++){
                if(i==arr.size()) i=0;
                grid[j][k]=arr[i++];
            }
        }
        return grid;
    }
};
