class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        int i=prices.size()-1, j=discounts.size()-1;
        double total=0;
        while(i>=0 && j>=0) {
            double price = (double)(prices[i--]);
            total+=(price*(100.00-discounts[j--]))/100.00;
        }
        while(i>=0) total+=prices[i--];
        return total;
    }
};
