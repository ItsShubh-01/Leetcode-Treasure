class Solution {
public:
    int myAtoi(string s) {
        bool sign = true;
        bool gotSign = false;
        bool numStarted = false;
        long long val = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(isdigit(s[i]))
            {
                numStarted = true;
                val = val*10 + (s[i]-'0');
                if(val>INT_MAX)
                    return sign? INT_MAX : INT_MIN;
            }
            else if(!isdigit(s[i]) && numStarted)
                return sign? val : -1*val;
            else if(!numStarted)
            {
                if(s[i]=='-' && !gotSign){
                    sign = false;
                    gotSign = true;
                }
                else if(s[i]=='+' && !gotSign){
                    sign = true;
                    gotSign = true;
                }
                else if(s[i]==' ' && !gotSign) continue;
                else return sign?val:-1*val;
            }
        }
        return sign? val: -1*val;
    }
};
