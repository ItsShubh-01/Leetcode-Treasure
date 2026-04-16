class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words. size();
        int i=0, j=0;
        
        while(i<n && j<n)
        {
            if(words[(startIndex+i)%n]==target)
                return i;
            else if(words[(startIndex-j+n)%n]==target) 
                return j;
            i++; j++;
        }
        return -1;
    }
};
