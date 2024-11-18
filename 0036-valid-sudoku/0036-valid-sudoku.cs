public class Solution {
    public bool IsValidSudoku(char[][] board) {
        bool[,] seen_box = new bool[9, 9];

        for(int i = 0; i < 9; i++) {
            bool[] seen_row = new bool[9];
            bool[] seen_col = new bool[9];

            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    int cell = board[i][j] - '1';
                    if(seen_row[cell]) {
                        return false;
                    } 
                    seen_row[cell] = true;

                    int x = ((int)i/3) * 3 + ((int)j/3);

                    if(seen_box[x, cell]) {
                        return false;
                    }
                    seen_box[x, cell] = true;
                }
                if(board[j][i] != '.') {
                    int cell = board[j][i] - '1';
                    if(seen_col[cell]) {
                        return false;
                    }
                    seen_col[cell] = true;
                }
            }
        }
        
        return true;
    }
}