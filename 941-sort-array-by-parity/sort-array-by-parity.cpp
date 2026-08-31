class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0;   // pointer for even placement
        int j = 0;   // pointer for traversal

        while(j < n) {
            if(nums[j] % 2 == 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
        return nums;
    }
};
