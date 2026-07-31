class Solution {
public:
    int minimumPushes(string word) {
        vector<int> count(26, 0);
        for(char ch:word) count[ch-'a']++;
        sort(count.begin(), count.end(), greater<int>());
        int i=0, ans=0;
        while(i<26 && count[i]>0) {
            if(i<8) ans+=count[i];
            else if(i<16) ans+=2*count[i];
            else if(i<24) ans+=3*count[i];
            else ans+=4*count[i];
            i++;
        }
        return ans;
    }
};
