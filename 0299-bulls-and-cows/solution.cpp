class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> arr(10,0);
        int bulls = 0, cows = 0;
        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i]==guess[i])
                bulls++;
            else
                arr[secret[i]-'0']++;
        }
        for(int i=0; i<guess.size(); i++)
            if(secret[i]!=guess[i] && arr[guess[i]-'0'])
            {
                cows++;
                arr[guess[i]-'0']--;
            }
        string ans = to_string(bulls) + "A" + to_string(cows) + "B";
        return ans;
    }
};
