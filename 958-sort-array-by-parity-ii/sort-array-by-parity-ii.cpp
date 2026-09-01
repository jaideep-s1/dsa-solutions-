class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0; // even index
        int j = 1; // odd index

        while(i < n && j < n) {
            // अगर even index पर odd number है
            if(nums[i] % 2 == 1 && nums[j] % 2 == 0) {
                swap(nums[i], nums[j]);
            }

            // अगर even index सही है तो आगे बढ़ो
            if(nums[i] % 2 == 0) i += 2;

            // अगर odd index सही है तो आगे बढ़ो
            if(nums[j] % 2 == 1) j += 2;
        }
        return nums;
    }
};
