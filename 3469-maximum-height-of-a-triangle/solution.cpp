class Solution {
public:
    int solve(int red, int blue, bool startRed)
    {
        int height = 0;
        int i = 1;

        while(true)
        {
            if(startRed)
            {
                if(red < i) break;
                red -= i;
            }
            else
            {
                if(blue < i) break;
                blue -= i;
            }

            height++;
            i++;
            startRed = !startRed;
        }

        return height;
    }

    int maxHeightOfTriangle(int red, int blue)
    {
        return max(solve(red, blue, true), solve(red, blue, false));
    }
};
