class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> count_vals_s;
        std::unordered_map<char, int> count_vals_t;

        if(s.length() != t.length())
            return false;
        else {
            for(int i=0; i<s.length(); i++){
                char temp_s = s[i];
                char temp_t = t[i];
                if(count_vals_s.contains(temp_s)){
                    count_vals_s[temp_s]++;
                }
                if(count_vals_t.contains(temp_t)){
                    count_vals_t[temp_t]++;
                }
                count_vals_s.insert({temp_s,1});
                count_vals_t.insert({temp_t,1});
            }
            for(const auto& [key, value] : count_vals_s){
                if(!count_vals_t.contains(key) || count_vals_t[key] != value){
                    return false;
                }
            }
            return true;
        }
    }
};
