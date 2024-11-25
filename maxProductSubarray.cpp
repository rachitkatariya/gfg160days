#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1, suffix = 1; 
        int ans = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++) {
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;

            prefix *= nums[i];
            suffix *= nums[nums.size() - 1 - i];

            ans = max(ans, max(prefix, suffix));
        }
        
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {-2, 6, -3, -10, 0, 2};

    cout << "Maximum product of subarray is : " << obj.maxProduct(arr);

}