class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for(int i = 0; i < 9; i++) {
            unordered_set<char> st;

            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.')
                    continue;

                if(st.find(board[i][j]) != st.end())
                    return false;

                st.insert(board[i][j]);
            }
        }

        // Check columns
        for(int j = 0; j < 9; j++) {
            unordered_set<char> st;

            for(int i = 0; i < 9; i++) {

                if(board[i][j] == '.')
                    continue;

                if(st.find(board[i][j]) != st.end())
                    return false;

                st.insert(board[i][j]);
            }
        }

        // Check 3 × 3 boxes
        for(int boxRow = 0; boxRow < 9; boxRow += 3) {
            for(int boxCol = 0; boxCol < 9; boxCol += 3) {

                unordered_set<char> st;

                for(int i = boxRow; i < boxRow + 3; i++) {
                    for(int j = boxCol; j < boxCol + 3; j++) {

                        if(board[i][j] == '.')
                            continue;

                        if(st.find(board[i][j]) != st.end())
                            return false;

                        st.insert(board[i][j]);
                    }
                }
            }
        }

        return true;
    }
};