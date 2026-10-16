class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq_nums;
        std::priority_queue<std::pair<int, int>> pq;   // max-heap by default
        std::vector<int> result;

        for(int i=0;i<nums.size();i++){
            freq_nums[nums[i]]++;
        }

        for (const auto& [k, v] : freq_nums) {
            pq.push({v, k});
        }

        for(int i=k; i>0 ; i--){
            result.push_back(pq.top().second);
            pq.pop();
        }
    return result;
    }
};
