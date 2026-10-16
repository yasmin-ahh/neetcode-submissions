#include <queue>

class Solution {
public:
    bool isValid(string s) {
        std::vector<char> st;
        std::queue<char> q;
        std::unordered_map<char, char> match = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for(char c: s){
            if(match.count(c)){
                if(st.empty() || st.back() != match[c]){
                    return false;
                }
                st.pop_back();
            } else{
                st.push_back(c);
            }
        }
        return st.empty();
    }
};
