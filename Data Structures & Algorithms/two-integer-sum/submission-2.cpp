class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> s;
        for(int i=0; i<nums.size(); i++){
            s[nums[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            int x = target - nums[i];
            if(s.contains(x)){
                if(i != s.at(x)){
                return std::vector<int>{i, s.at(x)};
                }
            }
        }
    }
};
