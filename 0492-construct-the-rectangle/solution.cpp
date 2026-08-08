class Solution {
public:
    vector<int> constructRectangle(int area) {
        int L =area;
        int W=1;
        for(int i = 1; i*i<=area;i++){
            if (area%i==0){
                W=i;
                L=area/i;
            }
        }
        return {L,W};
    }
};
