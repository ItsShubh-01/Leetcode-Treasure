class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int count=1;
        for(int i=1; i<=n; i++){
            int temp=9, num=9;
            for(int j=1; j<i; j++){
                temp*=num;
                num--;
            }
            count+=temp;
        }
        return count;
    }
};
