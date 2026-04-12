class Solution {
public:
    #define PI 3.14159265358979323846
    vector<double> internalAngles(vector<int>& sides) 
    {
        vector<double> ans;
        double a = sides[0], b=sides[1], c=sides[2];
        if(a + b > c && b + c > a && c + a > b)
        {
            double cosA = (b*b + c*c - a*a)/(2*b*c);
            double rad = acos(cosA);
            double deg = rad * 180.0 / PI;
            ans.push_back((deg));

            cosA = (c*c + a*a - b*b)/(2*c*a);
            rad = acos(cosA);
            deg = rad * 180.0 / PI;
            ans.push_back(deg);

            cosA = (a*a + b*b - c*c)/(2*a*b);
            rad = acos(cosA);
            deg = rad * 180.0 / PI;
            ans.push_back(deg);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
