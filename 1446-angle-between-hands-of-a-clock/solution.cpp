class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hrs = 30*hour + (minutes/2.00);
        double minu = 6*minutes;
        return min(abs(hrs-minu), 360-abs(hrs-minu));
    }
};
