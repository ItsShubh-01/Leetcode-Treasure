class Solution {
public:
    int maximum69Number (int num) {
        string numz = to_string(num);
        for(int i=0; i<numz.size(); i++)
        {
            if(numz[i]=='6')
            {
                numz[i]='9';
                break;
            }
        }
        return stoi(numz);
    }
};
