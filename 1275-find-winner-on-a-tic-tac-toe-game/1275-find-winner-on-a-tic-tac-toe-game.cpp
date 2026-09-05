class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {

        vector<vector<char>> board(3, vector <char>(3, ' '));
       for (int i=0; i<moves.size(); i++) {
        int row = moves[i][0];
        int col = moves[i][1];

        if (i%2==0){
            board[row][col] = 'X';
        }
        else {
            board[row][col] = 'O';
        }
       }

       for (int i=0; i<3; i++){
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            if (board[i][0] == 'X') return "A";
            else return "B";
        }
       }

       for (int j=0; j<3; j++){
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j]){
            if(board[0][j] == 'X') return "A";
            else return "B";
        }
       }

       if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        if (board[0][0] == 'X') return "A";
        else return "B";
       }

       if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        if (board[0][2] == 'X') return "A";
        else return "B";
       }

       if (moves.size() == 9) return "Draw";

       return "Pending";
    }
};