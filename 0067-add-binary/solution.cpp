class Solution {
public:
    int count(char a, char b, char c)
    {
        if (a == '0' && b == '0' && c == '0')
            return 0;
        if ((a == '1' && b == '0' && c == '0') || (a == '0' && b == '1' && c == '0') || (a == '0' && b == '0' && c == '1'))
            return 1;
        if ((a == '1' && b == '1' && c == '0') || (a == '0' && b == '1' && c == '1') || (a == '1' && b == '0' && c == '1'))
            return 2;
        else
            return 3;
    }
    string addBinary(string a, string b)
    {
        string t;
        char carry = '0';
        int min_size = min(a.size(), b.size());
        int size = max(a.size(), b.size());
        string add(size - min_size, '0');
        if (a.size() < b.size())
            a.insert(0, add);
        else if (a.size() > b.size())
            b.insert(0, add);

        for (int i = 0; i < size; i++)
        {
            if (count(a[size - i - 1], b[size - i - 1], carry) == 0)
            {
                t.append("0");
                carry = '0';
            }
            else if (count(a[size - i - 1], b[size - i - 1], carry) == 1)
            {
                t.append("1");
                carry = '0';
            }
            else if (count(a[size - i - 1], b[size - i - 1], carry) == 2)
            {
                t.append("0");
                carry = '1';
            }
            else if (count(a[size - i - 1], b[size - i - 1], carry) == 3)
            {
                t.append("1");
                carry = '1';
            }
        }
        if (carry == '1')
            t.append("1");
        reverse(t.begin(), t.end());
        return t;
    }
};
