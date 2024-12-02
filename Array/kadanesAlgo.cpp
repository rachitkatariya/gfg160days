#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int sum = 0, maxSum = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            maxSum = max(sum, maxSum);
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};

    cout << "Maximum sum of subarray is : " << obj.maxSubarraySum(arr);

}