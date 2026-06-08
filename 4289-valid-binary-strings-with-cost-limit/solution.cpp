class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string> arr;
        for(int i=0; i<(1<<n); i++){
            string s = bitset<12>(i).to_string();
            string t;
            int sum = 0; bool ok = true;
            for(int j=12-n; j<12; j++){
                t+=s[j];
                if(s[j]=='1') {
                    sum+=j+n-12;
                    if((j>0 && s[j-1]=='1') || sum>k){
                        ok = false;
                        break;
                    }
                }
            }
            if(ok) arr.push_back(t);
        }
        return arr;
    }
};
