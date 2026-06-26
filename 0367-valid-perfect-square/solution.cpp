class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int I=1; I<=(1<<16); I++)
            if(num%I==0 && num/I==I) return true;
            else if(I>num/I) return false;
        return false;
    }
};
