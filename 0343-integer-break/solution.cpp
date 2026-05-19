class Solution {
public:
    int integerBreak(int n) {
        long long maxi = 0;
        for(int i=2; i<=n; i++){
            int num = n/i;
            int rem = (n-(num*i));
            if(rem == 0) {
                if((pow(num,i-1) * (num+rem)) > maxi)
                    maxi = ((int)(pow(num,i-1)) * (num+rem));
            }
            else{
                if((pow(num,i-1) * (num+rem)) > maxi)
                    maxi = ((int)(pow(num,i-1)) * (num+rem));
                num++;
                rem = n-(num*i);
                if((pow(num,i-1) * (num+rem)) > maxi)
                    maxi = ((int)(pow(num,i-1)) * (num+rem));
            }
        }
        return maxi;
    }
};
