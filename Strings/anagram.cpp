#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool areAnagrams(string& s1, string& s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return s1 == s2;
    }
};

int main() {
    Solution solution;
    
    string s1 = "listen";
    string s2 = "silent";
    
    if (solution.areAnagrams(s1, s2)) {
        cout << s1 << " and " << s2 << " are anagrams." << endl;
    } else {
        cout << s1 << " and " << s2 << " are not anagrams." << endl;
    }

    string s3 = "hello";
    string s4 = "world";
    
    if (solution.areAnagrams(s3, s4)) {
        cout << s3 << " and " << s4 << " are anagrams." << endl;
    } else {
        cout << s3 << " and " << s4 << " are not anagrams." << endl;
    }

    return 0;
}
