class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int units = 0;
        unordered_map<int,int> hash;
        vector<int> arr;
        for(vector<int>& it:boxTypes){
            hash[it[1]]+=it[0];
            if(hash[it[1]]==it[0]) arr.push_back(it[1]);
        }
        sort(arr.begin(), arr.end());
        for(int i=arr.size()-1; i>=0; i--){
            if(hash[arr[i]]<=truckSize){
                units+=hash[arr[i]]*arr[i];
                truckSize-=hash[arr[i]];
            }else{
                units+=truckSize*arr[i];
                break;
            }
        }
        return units;
    }
};
