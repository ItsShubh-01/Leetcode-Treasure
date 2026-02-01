class Solution {
public:
    int countMonobit(int n) 
    {
        int count = 0;
        int val = 0;
        int i=0;
        while(val<=n)
        {
            val+=pow(2,i);count++;i++;
        }
        return count;
    }
};
