class Solution {
public:
    int minSwaps(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> arr;
        
        for(int i=0; i<n; i++)
        {
            int count = 0;
            for(int j=n-1; j>=0; j--)
            {
                if(grid[i][j]==0)
                    count++;
                else
                    break;
            }
            arr.push_back(count);
        }

        int swaps = 0;
        int req_ind = 0;
        for(int zeroes = n-1; zeroes>0; zeroes--)
        {
            bool found = false;
            for(int i=req_ind; i<n; i++)
            {
                if(arr[i]>=zeroes)
                {
                    found = true;
                    for(int j=i; j>req_ind; j--)
                    {
                        swap(arr[j],arr[j-1]);
                        swaps++;
                    }
                    break;
                }
            }
            if(!found)
                return -1;
            req_ind++;
        }
        return swaps;
    }
};
