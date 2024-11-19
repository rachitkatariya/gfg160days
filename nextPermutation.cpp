#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& arr) {
    int n = arr.size();
    int i = n - 2;

    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }
        swap(arr[i], arr[j]);
    }

    reverse(arr.begin() + i + 1, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3};

    nextPermutation(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
