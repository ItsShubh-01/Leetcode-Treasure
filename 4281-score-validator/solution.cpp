class Solution {
public:
    vector<int> scoreValidator(vector<string>& s) {
        int score = 0, counter = 0;
        for(int i=0; i<s.size(); i++){
            if(counter==10) break;

            if(s[i]=="1") score++;
            else if(s[i]=="2") score+=2;
            else if(s[i]=="3") score+=3;
            else if(s[i]=="4") score+=4;
            else if(s[i]=="6") score+=6;
            else if(s[i]=="W") counter++;
            else if(s[i]=="WD") score++;
            else if(s[i]=="NB") score++;
        }
        return {score, counter};
    }
};
