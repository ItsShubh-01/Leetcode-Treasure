class Solution {
public:
    bool binarysearch(vector<int> arr, int target,int size) {
        int start = 0;
        int end = size- 1;
        int mid = start + (end - start) / 2;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (arr[mid] > target) {
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int total=m*n;
        vector<int> arr;
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                arr.push_back(matrix[row][col]);
            }
        }
        // sort(arr.begin(),arr.end());
        return binarysearch(arr,target,total);
    }
};
