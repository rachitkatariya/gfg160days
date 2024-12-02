#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; 
        for (int i = 0; i < nums.size(); i++) {
                swap(nums[i], nums[j]);
                j++;
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int n, temp;

    // size of vector array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // element of the vector array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(temp);
    }

    solution.moveZeroes(nums);

    cout << "Resultant array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
