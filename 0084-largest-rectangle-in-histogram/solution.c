int largestRectangleArea(int* arr, int n) {
    if(n==1) return arr[0];
    int temp[n+1], top = -1, maxArea = 0;
    for(int i=0; i<=n; i++) {
        int height = (i==n? 0:arr[i]);
        while(top != -1 && height < arr[temp[top]]) {
            int h = arr[temp[top--]], width;
            if(top == -1) width = i;
            else width = i-temp[top]-1;

            int area = h*width;
            if(area>maxArea) maxArea = area;
        }
        temp[++top] = i;
    } return maxArea;
}
