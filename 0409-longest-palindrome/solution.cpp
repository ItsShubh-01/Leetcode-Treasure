class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count(52,0);
        for(char &ch:s){
            if(islower(ch)) count[ch-'a']++;
            else count[ch-'A'+26]++;
        }
        int ans = 0; bool odd = false;
        for(int i:count) {
            if(i%2) {odd=true; ans+=i-1;}
            else ans+=i;
        }
        return odd? ans+1:ans;
    }
};
