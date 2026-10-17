class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::set<std::vector<int>> index;
        std::sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
            int pointerLeft = i + 1;
            int pointerRight = nums.size() - 1;

            while(pointerLeft < pointerRight){
                int sum = nums[i] + nums[pointerLeft] + nums[pointerRight];

                if(sum == 0){
                    index.insert({nums[i], nums[pointerLeft], nums[pointerRight]});
                    pointerLeft++;
                    pointerRight--;
                }
                else if(sum < 0){
                    pointerLeft++;
                }
                else {
                    pointerRight--;
                }
            }
        }
        return vector<vector<int>>(index.begin(), index.end());
    }
};
