class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int rev = 0;
        int temp = n;
        while(temp>0){
            rev=rev*10+(temp%10);
            temp/=10;
        }

        int sum = 0;
        for(int i=min(n,rev); i<=max(n,rev); i++){
            int num = i;
            bool isPrime = true;
            for(int j=2; j<num; j++)
                if(num%j==0){
                    isPrime = false;
                    break;
                }
            if(isPrime && num>1) sum+=num;
        }
        return sum;
    }
};
