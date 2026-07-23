class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int& i:nums) {
            hash[i]++;
            if(hash[i]==2) return i;
        }
        return -1;
    }
};
