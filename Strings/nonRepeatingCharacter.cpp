#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    char nonRepeatingChar(string &s) {
        map<char, int> mp; 
        
        for (auto ele : s) {
            mp[ele]++;
        }
        
        for (auto ele : s) {
            if (mp[ele] == 1) {
                return ele;
            }
        }
        
        return '$';
    }
};

int main() {
    Solution solution;
    
    string s1 = "geeksforgeeks";
    char result1 = solution.nonRepeatingChar(s1);
    if (result1 != '$') {
        cout << "First non-repeating character in \"" << s1 << "\" is: " << result1 << endl;
    } else {
        cout << "No non-repeating character found in \"" << s1 << "\"" << endl;
    }
    
    string s2 = "abcabc";
    char result2 = solution.nonRepeatingChar(s2);
    if (result2 != '$') {
        cout << "First non-repeating character in \"" << s2 << "\" is: " << result2 << endl;
    } else {
        cout << "No non-repeating character found in \"" << s2 << "\"" << endl;
    }
    return 0;
}
