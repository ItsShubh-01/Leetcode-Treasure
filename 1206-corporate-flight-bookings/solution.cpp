class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> arr(n,0);
        for(int i=0; i<bookings.size(); i++){
            arr[bookings[i][0]-1]+=bookings[i][2];
            if(bookings[i][1]<n)
                arr[bookings[i][1]]-=bookings[i][2];
        }
        int sum=0;
        for(int &i:arr) {sum+=i; i=sum;}
        return arr;
    }
};
