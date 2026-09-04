class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int countless = 0;
        int countequal = 0;
        int n = nums.size();

        // Count less and equal elements
        for(int num : nums){
            if(num < pivot){
                countless++;
            } else if(num == pivot){
                countequal++;
            }
        }

        // Indices for placement
        int i = 0;                  // less than pivot
        int j = countless;          // equal to pivot
        int k = countless + countequal; // greater than pivot

        vector<int> result(n);

        // Fill result array
        for(int num : nums){
            if(num < pivot){
                result[i] = num;
                i++;
            } else if(num == pivot){
                result[j] = num;
                j++;
            } else {
                result[k] = num;
                k++;
            }
        }
        return result;
    }
};
