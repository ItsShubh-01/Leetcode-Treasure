#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define pi  pair<int,int>
#define rep(i,a,b) for(int i=(a); i<(b); ++i)

const ll INF = 1e18;
const int mod = 1e9 + 7;

class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        ll totalArea = 0;

        int minX = INT_MAX, minY = INT_MAX;
        int maxX = INT_MIN, maxY = INT_MIN;

        set<pi> st;

      rep(i,0,rectangles.size()) {
        auto &r = rectangles[i];
            int x1 = r[0], y1 = r[1];
            int x2 = r[2], y2 = r[3];

            
            totalArea += (ll)(x2 - x1) * (y2 - y1);

          
            minX = min(minX, x1);
            minY = min(minY, y1);
            maxX = max(maxX, x2);
            maxY = max(maxY, y2);

           
            pi p1 = {x1, y1};
            pi p2 = {x1, y2};
            pi p3 = {x2, y1};
            pi p4 = {x2, y2};

            for (auto p : {p1, p2, p3, p4}) {
                if (st.count(p)) st.erase(p);
                else st.insert(p);
            }
        }

      
        ll bigArea = (ll)(maxX - minX) * (maxY - minY);
        if (totalArea != bigArea) return false;

        
        if (st.size() != 4) return false;

        if (!st.count({minX, minY})) return false;
        if (!st.count({minX, maxY})) return false;
        if (!st.count({maxX, minY})) return false;
        if (!st.count({maxX, maxY})) return false;

        return true;
    }
};
