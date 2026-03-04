class Solution {
public:
    int numSpecial(vector<vector<int>>& mat)
    {
        int special = 0;
        for(int i=0; i<mat.size(); i++)
        {
            int count = 0;
            int index = -1;
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                    index = j;
                }
                if(count == 2)
                {
                    count = 0;
                    break;
                }
            }

            if(count == 1)
            {
                int count2 = 0;
                for(int k=0; k<mat.size(); k++)
                {
                    if(mat[k][index]==1)
                        count2++;
                    if(count2==2)
                        break;
                }
                if(count2==1)
                    special++;
            }
        }
        return special;
    }
};
