class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> mems;
        int pointer1 = 0;
        int bestVal = 0;
        for(int i=0; i<s.size(); i++){
            if(mems.contains(s[i])){
                pointer1 = std::max(pointer1, mems[s[i]] + 1);
            }
            mems[s[i]] = i; 
            bestVal = std::max(bestVal, i - pointer1 + 1);
        }
    return bestVal;
    }
};
