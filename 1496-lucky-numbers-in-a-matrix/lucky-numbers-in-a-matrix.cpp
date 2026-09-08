class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;

        for (int i = 0; i < matrix.size(); i++) {

            int minRow = matrix[i][0];

            for (int j = 0; j < matrix[0].size(); j++) {
                minRow = min(minRow, matrix[i][j]);
            }

            for (int j = 0; j < matrix[0].size(); j++) {

                if (matrix[i][j] == minRow) {

                    int maxColumn = 0;

                    for (int k = 0; k < matrix.size(); k++) {
                        maxColumn = max(maxColumn, matrix[k][j]);
                    }

                    if (matrix[i][j] == maxColumn) {
                        ans.push_back(matrix[i][j]);
                    }
                }
            }
        }

        return ans;
    }
};