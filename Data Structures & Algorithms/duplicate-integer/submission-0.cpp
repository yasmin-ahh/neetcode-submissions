class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::vector<int> v = nums;
        std::unordered_set<int> seen;
        for(int x: nums){
            if (!seen.insert(x).second) {
                return true;
            }
            else {
                v.push_back(x);
            }
        }
        return false;
    }
};