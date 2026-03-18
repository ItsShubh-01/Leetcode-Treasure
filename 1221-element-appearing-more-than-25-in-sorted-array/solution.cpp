class Solution {
public:
    int findSpecialInteger(vector<int>& arr)
    {
        int n = arr.size();
        unordered_map<int,int> hash;
        for(const int& i:arr)
        {
            hash[i]++;
            if(hash[i]>n/4)
                return i;
        }
        return -1;
    }
};
