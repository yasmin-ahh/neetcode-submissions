class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> leftProduct(nums.size(), 1);
        std::vector<int> rightProduct(nums.size(), 1);
        std::vector<int> newProduct(nums.size());

        for(int i=1; i<nums.size(); i++){
            leftProduct[i] = leftProduct[i-1] * nums[i-1];
        }
        for(int i=nums.size() -2; i>=0; i--){
            rightProduct[i] = rightProduct[i+1] * nums[i+1];
        }
        for(int i=0; i<nums.size(); i++){
            newProduct[i] = leftProduct[i] * rightProduct[i];
        }
        return newProduct;
    }
};
