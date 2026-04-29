class Solution {
public:
    unordered_map<int,int> hash;
    int tribonacci(int n) {
        if(n==0) return 0;
        else if(n==1) return 1;
        else if(n==2) return 1;
        if(hash.find(n)!=hash.end()) return hash[n];
        hash[n] = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return hash[n];
    }
};
