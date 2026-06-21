class Solution {
public:
    int maxDistance(string moves) {
        int count=0;
        int i=0, j=0;
        for(char &ch:moves){
            if(ch=='_') count++;
            else if(ch=='U') i++;
            else if(ch=='D') i--;
            else if(ch=='L') j--;
            else if(ch=='R') j++;
        }
        if(i>=0) i+=count;
        else i-=count;
        return abs(i)+abs(j);
    }
};
