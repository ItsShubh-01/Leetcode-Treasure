class Solution {
public:
    int rotatedDigits(int n) {
        const int check[10] = {0,1,5,-1,-1,2,9,-1,8,6};
        int count = 0;
        for(int i=1; i<=n; i++)
        {
            int temp = i;
            bool valid = true;
            bool changed = false;
            while(temp>0){
                int num = temp%10;
                if(check[num]==-1){
                    valid = false;
                    break;
                }
                else if(check[num]!=num)
                    changed = true;
                temp/=10;
            }
            if(valid && changed) count++;
        }
        return count;
    }
};
