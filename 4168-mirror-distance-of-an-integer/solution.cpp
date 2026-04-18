// class Solution {
// public:
//     int mirrorDistance(int n) {
//         int rev = 0;
//         int temp = n;
//         while(temp>0)
//         {
//             rev = rev*10 + (temp%10);
//             temp/=10;
//         }
//         return abs(n-rev);
//     }
// };



class Solution {
public:
    int mirrorDistance(int n) {
        string s = to_string(n);
        reverse(s.begin(),s.end());
        int x = stoi(s);
        return (abs(x-n));
    }
};
