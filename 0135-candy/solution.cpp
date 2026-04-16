class Solution {
public:
    int candy(vector<int> &a) {
        int n = a.size();
        vector<int> ans1(n, 1), ans2(n, 1);
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) ans1[i] = ans1[i - 1] + 1;
        }
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > a[i + 1]) ans2[i] = ans2[i + 1] + 1;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += max(ans1[i], ans2[i]);
        }
        return ans;
    }
};
