class Solution {
public:
    int staircase(int x, unordered_map<int,int>& hash){
        if(x==1||x==2) return x;
        if(hash[x]!=0) return hash[x];
        hash[x]=staircase(x-1,hash)+staircase(x-2,hash);
        return hash[x];
    }
    int climbStairs(int n) {
        unordered_map<int,int> hash;
        return staircase(n,hash);
    }
};
