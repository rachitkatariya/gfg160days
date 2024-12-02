#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int maxProfit = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > prices[i - 1]){
                maxProfit += prices[i] - prices[i-1];
            }
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
    Solution obj;

    int result = obj.maximumProfit(prices);

    cout << " Maximum Profit : " << result << endl;

}