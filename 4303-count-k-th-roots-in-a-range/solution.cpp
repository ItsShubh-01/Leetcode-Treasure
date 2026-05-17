class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        if(k==1) return r-l+1;
        int count = 0;
        long long num = 0;
        while(true){
            int val = pow(num,k);
            if(val >= l){
                if(val<=r) count++;
                else break;
                num++;
            }else num++;
        }
        return count;
    }
};
