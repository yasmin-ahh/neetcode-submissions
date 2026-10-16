#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        std::string original;
        for(int i=0; i<s.size(); i++){
            char c = tolower(s[i]); 
            if (isalnum(c)) {
                original.push_back(c); 
            }
        }
        std::string reversed = original;
        std::reverse(reversed.begin(), reversed.end());   
        return reversed == original; 
    }
};
