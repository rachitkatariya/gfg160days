#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};

int main() {
    Solution solution;
    vector<int> arr;
    int n, temp;

    // size of vector array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // element of the vector array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    solution.reverseArray(arr);

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
