class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& tower, vector<int>& center, int radius) 
    {
        vector<int> arr = {INT_MAX,INT_MAX};
        int max_qual = INT_MIN;
        for(int i=0 ; i<tower.size() ; i++)
        {
            if((abs(tower[i][0] - center[0]) + abs(tower[i][1] - center[1])) <= radius )
            {
                if(tower[i][2] > max_qual || 
                (tower[i][2] == max_qual && 
                (tower[i][0]<arr[0] || 
                (tower[i][0]==arr[0] && tower[i][1] < arr[1]))))
                {
                    max_qual = tower[i][2];
                    arr = {tower[i][0], tower[i][1]};
                }
            }
        }
        if(arr[0] == INT_MAX && arr[1] == INT_MAX) return {-1,-1};
        else return arr;
    }
};

