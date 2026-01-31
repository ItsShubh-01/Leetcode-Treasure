class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomleft, vector<vector<int>>& topright) 
    {
        long long bigArea = 0;
        int n = bottomleft.size();
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                long long blox = max(bottomleft[i][0],bottomleft[j][0]);
                long long bloy = max(bottomleft[i][1],bottomleft[j][1]);
                long long trix = min(topright[i][0],topright[j][0]);
                long long triy = min(topright[i][1],topright[j][1]);
                if(trix-blox<=0 || triy-bloy<=0) continue;
                long long area = min(trix-blox,triy-bloy)*min(trix-blox,triy-bloy);
                bigArea = max(bigArea,area);
            }
        }
        return bigArea;
    }
};
