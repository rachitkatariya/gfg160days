#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
  public:

    void rotateArr(vector<int>& arr, int d) {
        int length = arr.size();
        d = d % length;
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin(),arr.end());
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,2,3,4,5,6,7};
    int d = 2;

    cout << "Original array : ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;

    s.rotateArr(arr, d);

    cout << "Rotated array is : ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}