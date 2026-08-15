class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());

        double total = 0.0;
        int i = prices.size() - 1;
        int j = discounts.size() - 1;

        while(i >= 0 && j >= 0) {
            double dis  = 0;
            dis = (prices[i] * (100 - discounts[j])) / 100.0;
            total += dis;
            i--; 
            j--;
        }

        while(i >= 0 && j < 0) {
            total += prices[i];
            i--;
        }
        
        return total;

    }
};