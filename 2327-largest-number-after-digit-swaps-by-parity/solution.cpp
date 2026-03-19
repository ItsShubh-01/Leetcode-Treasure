class Solution {
public:
    int largestInteger(int num)
    {
        vector<int> odd;
        vector<int> even;

        int temp = num;
        while(temp>0)
        {
            if(temp%2==0)
                even.push_back(temp%10);
            else
                odd.push_back(temp%10);

            temp/=10;
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());

        string n="";
        int odd_ind = 0;
        int even_ind = 0;
        while(num>0)
        {
            if(num%2==0)
                n+=(char)('0'+even[even_ind++]);
            else
                n+=(char)('0'+odd[odd_ind++]);

            num/=10;
        }
        reverse(n.begin(),n.end());

        int ans = 0;
        for(const char& ch:n)
            ans = ans*10 + (ch - '0');
        return ans;
    }
};
