#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string& s1, string& s2) {
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        
        string ans = "";
        int carry = 0;
        
        int i = 0, j = 0;
        while (i < s1.length() && j < s2.length()) {
            int val = carry + (s1[i] - '0') + (s2[j] - '0');
            carry = val / 2;
            val %= 2;
            ans += '0' + val;
            i++;
            j++;
        }

        while (i < s1.length()) {
            int val = carry + (s1[i] - '0');
            carry = val / 2;
            val %= 2;
            ans += '0' + val;
            i++;
        }

        while (j < s2.length()) {
            int val = carry + (s2[j] - '0');
            carry = val / 2;
            val %= 2;
            ans += '0' + val;
            j++;
        }

        while (carry) {
            int val = carry;
            carry = val / 2;
            val %= 2;
            ans += '0' + val;
        }
        
        reverse(ans.begin(), ans.end());
        
        int k = 0;
        while (k < ans.length() && ans[k] == '0') k++;
        if (k == 0) return ans; 
        if (k == ans.length()) return "0"; 

        string res = "";
        while (k < ans.length()) {
            res += ans[k];
            k++;
        }
        return res;
    }
};

int main() {
    Solution solution;
    string s1 = "1010";
    string s2 = "1011";

    cout << "Result of adding " << s1 << " and " << s2 << " is: " << solution.addBinary(s1, s2) << endl;

    return 0;
}
