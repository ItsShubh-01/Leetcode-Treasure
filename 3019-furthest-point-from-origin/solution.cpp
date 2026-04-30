class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countL=0, countR=0, count_=0;
        for(int i=0; i<moves.size(); i++)
        {
            if(moves[i]=='L') countL++;
            else if(moves[i]=='R') countR++;
            else count_++;
        }

        if(countL>=countR) return countL-countR+count_;
        else return countR-countL+count_;
    }
};
