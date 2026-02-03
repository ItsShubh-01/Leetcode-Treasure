class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        vector <int> arr;
        int index = 0;
        if(haystack.size()<needle.size()) return -1;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0] && arr.size()==0) index=i;
            if(haystack[i]==needle[j]){
                arr.push_back(i);
                if(j==needle.size()-1) break;
                j++;
            }
            else if(haystack[i]!=needle[j]){
                if(arr.size()>=1) i=index;
                j=0;
                arr.clear();
            }
        }
        if(arr.size()==needle.size()) return arr[0];
        return -1;
    }
};
