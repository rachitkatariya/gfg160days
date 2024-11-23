#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

class Solution {
public:
    int maximumProfit(vector<int>& prices) {
        int l = 0;                        
        int r = 1;                        
        int maxProfit = 0;                

        while (r < prices.size()) {      
            if (prices[r] > prices[l]) {  
                int profit = prices[r] - prices[l];
                maxProfit = max(maxProfit, profit);
            } else {
                l = r;  
            }
            r++;        
        }

        return maxProfit;
    }
};



int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution obj;
    int result = obj.maximumProfit(prices);
    
    cout << "Maximum Profit: " << result << endl; 
    
    return 0;
}