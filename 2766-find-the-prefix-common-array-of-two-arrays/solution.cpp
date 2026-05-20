class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> hash;
        vector<int> ans;int count = 0;
        for(int i=0; i<A.size(); i++){
            if(A[i]==B[i]) count++;
            else{
                if(hash[A[i]]++) count++;
                if(hash[B[i]]++) count++; 
            }
            ans.push_back(count);
        }return ans;
    }
};
