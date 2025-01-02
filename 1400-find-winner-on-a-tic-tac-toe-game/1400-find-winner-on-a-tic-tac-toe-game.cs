public class Solution
{
    public string Tictactoe(int[][] moves)
    {
        int[,] board = new int[3, 3];
        int chance = 1;

        foreach (var move in moves)
        {
            board[move[0], move[1]] = chance;
            chance = chance == 1 ? 2 : 1;
        }

        for (int i = 0; i < 3; i++)
        {
            // columns
            if (board[i, 0] == board[i, 1] && board[i, 1] == board[i, 2] && board[i, 0] == board[i, 2])
            {
                if (board[i, 0] == 1) return "A";
                else if (board[i, 0] == 2) return "B";
            }

            // rows
            if (board[0, i] == board[1, i] && board[1, i] == board[2, i] && board[0, i] == board[2, i])
            {
                if (board[0, i] == 1) return "A";
                else if (board[0, i] == 2) return "B";
            }
        }

        // diagonal
        if (board[0, 0] == board[1, 1] && board[1, 1] == board[2, 2] && board[0, 0] == board[2, 2])
        {
            if (board[0, 0] == 1) return "A";
            else if (board[0, 0] == 2) return "B";
        }

        // diagonal
        if (board[0, 2] == board[1, 1] && board[1, 1] == board[2, 0] && board[0, 2] == board[2, 0])
        {
            if (board[0, 2] == 1) return "A";
            else if (board[0, 2] == 2) return "B";
        }

        if (moves.Length < 9)
        {
            return "Pending";
        }

        return "Draw";
    }
}