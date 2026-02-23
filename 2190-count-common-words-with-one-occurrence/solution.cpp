class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
        unordered_map<string,int> hash;
        unordered_map<string,bool> check;

        for(string word:words1)
        {
            hash[word]++;
            check[word]=true;
            if(hash[word]==2)
                hash[word]=3;
        }
        for(string word:words2)
        {
            if(hash[word]==1 && check[word])
                hash[word]++;
            else if(check[word])
                hash[word]++;
        }
        int count = 0;
        for(auto it:hash)
        {
            if(it.second==2)
                count++;
        }
        return count;
    }
};
