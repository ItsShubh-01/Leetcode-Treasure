class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        if(n<3) return 0;

        int count0 = 0, count1 = 0;
        for(int i=0; i<n; i++)
            if(s[i]=='0') count0++;
            else count1++;
        
        if(count0==0) return 0;
        if(count0==1){
            int prior = 0, post = 0;
            bool zero = false;
            for(int i=0; i<n; i++){
                if(s[i]=='0') zero = true;
                else if(!zero) prior++;
                else post++;
            }
            int sum = 0;
            if(prior>1) sum+=prior-1;
            if(post>1) sum+=post-1;
            return sum>1? 1:sum;
        }
        if(count0>1){
            int first = -1, last = -1;
            for(int i=0; i<n; i++){
                if(s[i]=='0'){
                    if(first==-1)
                        first = i;
                    else last = i;
                }
            }

            int prior = 0, mid = 0, post = 0;
            for(int i=0; i<n; i++){
                if(s[i]=='1'){
                    if(i<first) prior++;
                    else if(i>first && i<last) mid++;
                    else post++;
                }
            }

            int sum = 0;
            if(prior>1){
                sum+=prior-1;
                prior=1;
            }if(post>1){
                sum+=post-1;
                post=1;
            }if(mid>1){
                sum+=mid-1;
                mid=1;
            }

            if(post+mid>1 || prior+mid>1) sum++;
            return sum>count0? count0:sum;
        }
        return -1;
    }
};
