class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int rows = mat.size();
        int cols = mat[0].size();

        // Check if reshape is possible
        if (rows * cols != r * c)
            return mat;

        // Store all elements
        vector<int> arr;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr.push_back(mat[i][j]);
            }
        }

        // Create new matrix
        vector<vector<int>> result(r, vector<int>(c));

        int index = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result[i][j] = arr[index];
                index++;
            }
        }

        return result;
    }
};