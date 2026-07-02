class Solution {
public:
    bool isSub(string& s, string& t){
        if(s.size()+1!=t.size()) return false;

        int ind1=0, ind2=0;
        while(ind2<t.size()){
            if(s[ind1]==t[ind2++]) ind1++;
            if(ind1==s.size()) return true;
        }
        return false;
    }
    // int f(int ind1, int last, vector<string>& arr, vector<vector<int>>& dp){
    //     if(ind1==arr.size()) return 0;
    //     if(dp[ind1][last+1]!=-1) return dp[ind1][last+1];
    //     if(last!=-1 && arr[last].size()+1<arr[ind1].size()) return 0;

    //     int take = 0;
    //     if(last==-1 || isSub(arr[last], arr[ind1])) 
    //         take = 1+f(ind1+1, ind1, arr, dp);
    //     int leave = f(ind1+1, last, arr, dp);
    //     return dp[ind1][last+1]=max(take, leave);
    // }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string &a, const string &b) {
            return a.size() < b.size();
        });
        // vector<vector<int>> dp(words.size(), vector<int>(words.size()+1, -1));
        // return f(0, -1, words, dp);

        vector<int> dp(words.size()+1, 1);
        int maxi = 1;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<i; j++){
                if(isSub(words[j], words[i])){
                    dp[i]=max(dp[i], dp[j]+1);
                    maxi = max(maxi, dp[i]);
                }
            }
        }
        return maxi;
    }
};
