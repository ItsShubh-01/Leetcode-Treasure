class Solution {
public: 
    string reverseByType(string& s) 
    {
        vector<char> arr;
        vector<char> brr;
        for(int i=0 ; i<s.size() ; i++)
        {
            if((int)(s[i])<=122 && (int)(s[i])>=97) arr.push_back(s[i]);
            else brr.push_back(s[i]);
        }
        reverse(arr.begin(), arr.end());
        reverse(brr.begin(), brr.end());
        for(int i=0 ; i<arr.size();i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
        for(int i=0 ; i<brr.size();i++)
        {
            cout << brr[i] << " ";
        }cout << endl;

        string t = "";
        int k=0 ; int j=0;
        for(int i=0; i<s.size(); i++)
        {
            if((int)(s[i])<=122 && (int)(s[i])>=97)
            {
                t.push_back(arr[k++]);
            }
            else
            {
                t.push_back(brr[j++]);
            }
        }
        return t;
    }
};
