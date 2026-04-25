class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Row check
        for(int row = 0; row < 9; row++)
        {
            unordered_set<char> seen;
            for(int i = 0; i < 9; i++)
            {
                if(board[row][i] == '.') continue;
                if(seen.count(board[row][i])) return false;
                seen.insert(board[row][i]);
            }
        }

        // Column check
        for(int column = 0; column < 9; column++)
        {
            unordered_set<char> seen;
            for(int i = 0; i < 9; i++)
            {
                if(board[i][column] == '.') continue;
                if(seen.count(board[i][column])) return false;
                seen.insert(board[i][column]);
            }
        }

        // 3×3 subgrid check
        for(int s = 0; s < 9; s++)
        {
            unordered_set<char> seen;
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    int r = i + 3*(s/3);
                    int c = j + 3*(s%3);

                    if(board[r][c] == '.') continue;
                    if(seen.count(board[r][c])) return false;
                    seen.insert(board[r][c]);
                }
            }
        }

        return true;
    }
};
