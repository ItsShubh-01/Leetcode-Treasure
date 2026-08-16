class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count=0;
        unordered_map<int,int> hash;
        for(int i=0; i<arr.size(); i++) {
            hash[arr[i]]++;
            bool isok=true;
            for(int j=0; j<=i; j++) 
                if(hash.find(j)==hash.end()) isok=false;
            if(isok) count++;
        }
        return count;
    }
};
