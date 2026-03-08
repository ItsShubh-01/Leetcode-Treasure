class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums)
    {
        sort(nums.begin(),nums.end());
        const int n = nums.size();

        for(int i=0; i<n; i++)
        {
            int val = 0;
            for(int j=0; j<n; j++)
                if(nums[i][j]=='1')
                    val+=(1<<(n-j-1));

            if(val!=i)
            {
                string ans = bitset<16>(i).to_string().substr(16 - n);
                return ans;
            }
        }
        string ans(n,'1');
        return ans;
    }
};
