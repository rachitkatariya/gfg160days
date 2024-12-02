#include <iostream>
#include <unordered_map>
using namespace std;

int findSmallestMissing(int arr[], int n) {
    unordered_map<int, bool> present;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            present[arr[i]] = true;
        }
    }

    int smallestMissing = 1;
    while (present[smallestMissing]) {
        smallestMissing++;
    }
    return smallestMissing;
}

int main() {
    int arr[] = {5, 3, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Smallest missing positive number: " << findSmallestMissing(arr, n);
    return 0;
}
