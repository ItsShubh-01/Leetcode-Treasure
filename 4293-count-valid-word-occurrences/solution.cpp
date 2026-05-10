class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        string s;
        for(const auto& it:chunks) s+=it;

        unordered_map<string,int> hash;

        string word;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                if(word.empty()) continue;
                if(word.back()=='-'){
                    word.pop_back();
                    hash[word]++;
                }
                else hash[word]++;
                word.clear();
            }
            else if(s[i]=='-'){
                if(word.empty()){
                    continue;
                }
                else if(word.back()=='-'){
                    word.pop_back();
                    hash[word]++;
                    word.clear();
                }
                else word+=s[i];
            }
            else word+=s[i];
        }
        if(!word.empty() && word.back()=='-') word.pop_back();
        hash[word]++;


        vector<int> ans;
        for(const auto& st:queries)
            ans.push_back(hash[st]);
        return ans;
    }
};
