class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;
        int n=queries.size(), m=dictionary.size(), t=queries[0].size();
        vector<int> check(n,0);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                int count=0;
                for(int k=0;k<t;k++)
                {
                    if(queries[i][k]!=dictionary[j][k]) count++;
                    if(count>2) break;
                }
                if(count<3 && check[i]==0) {ans.push_back(queries[i]);check[i]++;}
            }
        return ans;

    }
};
