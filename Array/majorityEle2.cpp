#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int greater = n / 3;
        vector<int> ans;
        map<int, int> mp;
        
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        for (const auto& pair : mp) {
            if (pair.second > greater) {
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 2, 3, 3, 3};
    Solution obj;
    vector<int> result = obj.findMajority(arr);
    
    cout << "Majority elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
