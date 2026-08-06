class Solution {
public:
    string largestOddNumber(string num) {
        int count=num.size();
        for(int i=num.size()-1; i>=0; i--) {
            if((num[i]-'0')%2) break;
            count--;
        }
        return num.substr(0, count);
    }
};
