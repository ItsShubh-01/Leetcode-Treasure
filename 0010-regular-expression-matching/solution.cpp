// class Solution {
// public:
//     bool f(int i, int j, string& s, string& p, vector<vector<int>>& dp) {
//         if(i==s.size()) return true;
//         else if(j==p.size()) return false;

//         if(dp[i][j]!=-1) return dp[i][j];

//         if(s[i]==p[j] || p[j]=='.') return dp[i][j] = f(i+1, j+1, s, p, dp);
//         else if(p[j]=='*'){
//             if(s[i]==p[j-1] || p[j-1]=='.') 
//                 return dp[i][j] = f(i+1, j, s, p, dp) || f(i+1, j+1, s, p, dp);
//             else return dp[i][j]=f(i, j+1, s, p, dp);
//         }
//         else if(i<s.size()-1 && s[i+1]=='*') return dp[i][j] =  f(i, j+2, s, p, dp);
//         else return false;
//     }
//     bool isMatch(string s, string p) {
//         vector<vector<int>> dp(s.size()+1, vector<int>(p.size()+1, -1));
//         return f(0, 0, s, p, dp);
//     }
// };

class Solution {
public:
    bool f(int i, int j, string& s, string& p, vector<vector<int>>& dp) {

        // Both strings completely consumed
        if(i == s.size() && j == p.size()) return true;

        // String consumed, but pattern may still have x* pairs
        if(i == s.size()) {
            while(j + 1 < p.size()) {
                if(p[j + 1] != '*') return false;
                j += 2;
            }
            return j == p.size();
        }

        // Pattern consumed but string is not
        if(j == p.size()) return false;

        if(dp[i][j] != -1) return dp[i][j];

        // Check if current pattern character is followed by '*'
        if(j + 1 < p.size() && p[j + 1] == '*') {

            // Option 1: '*' matches zero occurrences
            bool zero = f(i, j + 2, s, p, dp);

            // Option 2: '*' matches one or more occurrences
            bool oneOrMore = false;

            if(s[i] == p[j] || p[j] == '.') {
                oneOrMore = f(i + 1, j, s, p, dp);
            }

            return dp[i][j] = zero || oneOrMore;
        }

        // Normal character or '.'
        if(s[i] == p[j] || p[j] == '.') {
            return dp[i][j] = f(i + 1, j + 1, s, p, dp);
        }

        return dp[i][j] = false;
    }

    bool isMatch(string s, string p) {
        vector<vector<int>> dp(
            s.size() + 1,
            vector<int>(p.size() + 1, -1)
        );

        return f(0, 0, s, p, dp);
    }
};
