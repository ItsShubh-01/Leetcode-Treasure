class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        string start = strs[0];
        int index = 0;
        int count = 0;
        int i = 0;
        while(index<start.size() && i<strs.size())
        {
            if(index > strs[i].size()) break;
            if(start[index] != strs[i][index]) break;
            if(start[index] == strs[i][index]) count++;
            i++;
            if(count == strs.size()) {s=s+start[index];index++;count=0;i=0;}
        }
        return s;
    }
};
