class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        else if(rowIndex==1) return {1,1};
        vector<vector<int>> temp = {{1},{1,1}};
        for(int i=2; i<=rowIndex; i++)
        {
            vector<int> arr;
            arr.push_back(1);
            for(int j=1; j<temp[i-1].size(); j++)
                arr.push_back(temp[i-1][j-1]+temp[i-1][j]);
            arr.push_back(1);
            temp.push_back(arr);
        }
        return temp[rowIndex];
    }
};
