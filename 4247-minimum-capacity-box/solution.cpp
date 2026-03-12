class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize)
    {
        int ind = -1;
        int val_cap = INT_MAX;
        for(int i=0; i<capacity.size(); i++)
        {
            if(capacity[i]>=itemSize && capacity[i]<val_cap)
            {
                ind = i;
                val_cap = capacity[i];
            }
        }
        return ind;
    }
};
