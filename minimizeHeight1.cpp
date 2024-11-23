#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int getMinDiff(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 1) return 0;
        
        sort(arr.begin(), arr.end());
        int ans = arr[n - 1] - arr[0];
        
        for (int i = 1; i < n; i++) {
            if (arr[i] >= k) {
                int maxi = max(arr[i - 1] + k, arr[n - 1] - k);
                int mini = min(arr[0] + k, arr[i] - k);
                ans = min(ans, maxi - mini);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 6, 10};
    int k = 5;
    
    int result = sol.getMinDiff(arr, k);
    cout << "Minimum difference is: " << result << endl;
    
    return 0;
}
