class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) 
    {
        map<int,bool> mp;
        for(int i=0 ; i<bulbs.size() ; i++)
        {
            if(mp[bulbs[i]] == true)
                mp[bulbs[i]] = false;
            else
                mp[bulbs[i]] = true;
        }

        vector<int> arr;
        for(auto &p : mp)
        {
            if(p.second==true)
                arr.push_back(p.first);
        }
        return arr;
    }
};
