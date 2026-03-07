class Solution {
public:
    string reverseVowels(string s)
    {
        string vowel;
        for(int i=0; i<s.size(); i++)
        {
            char ch = tolower(s[i]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowel+=s[i];
        }

        int ind = vowel.size()-1;
        for(int i=0; i<s.size(); i++)
        {
            char ch = tolower(s[i]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                s[i]=vowel[ind--];
        }
        return s;
    }
};
