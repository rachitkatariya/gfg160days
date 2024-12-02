#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int kadane(vector<int> &arr) {
        int maxSum = arr[0], currSum = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            currSum = max(arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }

    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int nonCirMax = kadane(arr);
        
        int totalSum = 0;  
        for (int i = 0; i < n; i++) {
            totalSum += arr[i];
            arr[i] = -arr[i];
        }

        int invertedMax = kadane(arr);
        int circularMax = totalSum + invertedMax;
        
        if (circularMax == 0) return nonCirMax;

        return max(nonCirMax, circularMax);
    }
};

int main() {
    Solution obj;
    vector<int> arr = {8, -8, 9, -9, 10, -11, 12};

    cout << "Maximum Circular Subarray Sum: " << obj.circularSubarraySum(arr);
    return 0;
}
