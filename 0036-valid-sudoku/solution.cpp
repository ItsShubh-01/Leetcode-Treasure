class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        int n = board.size();
        for(int i=0; i<n; i++)
        {
            vector<int> hash(10,0);
            for(int j=0; j<n; j++)
            {
                if(board[i][j]!='.')
                {
                    hash[board[i][j]-'0']++;
                    if(hash[board[i][j]-'0']==2)
                        return false;
                }
            }
            hash = vector<int>(10, 0);            
            for(int j=0; j<n; j++)
            {
                if(board[j][i]!='.')
                {
                    hash[board[j][i]-'0']++;
                    if(hash[board[j][i]-'0']==2)
                        return false;
                }
            }
        }

        for(int i=0; i<n; i+=3)
        {
            for(int j=0; j<n; j+=3)
            {
                vector<int> hash(10,0);
                for(int row=i; row<i+3; row++)
                {
                    for(int col=j; col<j+3; col++)
                    {
                        if(board[row][col]!='.')
                        {
                            hash[board[row][col]-'0']++;
                            if(hash[board[row][col]-'0']==2)
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
