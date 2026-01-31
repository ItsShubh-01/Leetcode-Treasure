class Solution {
public:

    void incr(vector<int>& digits , int index)
    {
        digits[index]++;
        if(digits[index] == 10)
        {
            digits[index] = 0;
            index--;
            if(index == -1)
            {
                digits.insert(digits.begin(),1);
                return;
            }
            incr(digits,index);
        }
    }

    vector<int> plusOne(vector<int>& digits) 
    {
        int i=digits.size()-1;
        incr(digits , i);
        return digits;
    }
};
