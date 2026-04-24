class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count = 0;
        int dist = 0;
        for(int i = 0;i<moves.size();i++){
            if(moves[i]=='L') dist--;
            else if(moves[i]=='R') dist++;
            else count++;
        }
        if(dist>=0) dist+=count;
        else dist-=count;
        return abs(dist);
    }
};
