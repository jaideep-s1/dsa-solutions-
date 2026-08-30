class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& arr1, vector<vector<int>>& arr2) {
        int i = 0, j = 0;
        vector<vector<int>> result;

        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i][0] == arr2[j][0]) {
                result.push_back({arr1[i][0], arr1[i][1] + arr2[j][1]});
                i++;
                j++;
            } 
            else if (arr1[i][0] < arr2[j][0]) {
                result.push_back(arr1[i]);
                i++;
            } 
            else {
                result.push_back(arr2[j]);
                j++;
            }
        }

        while (i < arr1.size()) {
            result.push_back(arr1[i]);
            i++;
        }

        while (j < arr2.size()) {
            result.push_back(arr2[j]);
            j++;
        }

        return result;
    }
};
