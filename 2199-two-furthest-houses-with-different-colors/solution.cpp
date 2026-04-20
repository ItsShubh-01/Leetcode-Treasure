class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int max_dist = 0;
        int i=0, j=n-1;
        while(colors[i]==colors[j]) j--;
        max_dist = max(max_dist, j-i);
        j=n-1;
        while(colors[i]==colors[j]) i++;
        max_dist = max(max_dist,j-i);
        return max_dist;
    }
};
