class Solution {
public:
    bool isSafe1(int row,int col, vector<string> &board, int n){
        int duprow = row;
        int dupcol = col;

        while(row>=0 && col>=0){
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        row = duprow;
        col = dupcol;

        while(col>=0){
            if(board[row][col] == 'Q') return false;
            col--;
        }

        row = duprow;
        col = dupcol;

        while(row<n && col>=0){
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        return true;
    }
    int solve(int col, vector<string> &board,int n){
        if(col == n){
            return 1;
        }
        int sum = 0;
        for(int row = 0;row<n;row++){
            if(isSafe1(row,col,board,n)){
                board[row][col] = 'Q';
                sum += solve(col+1, board, n);
                board[row][col] = '.';
            }
        }
        return sum;
    }
    int totalNQueens(int n) {
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        int ans = solve(0,board,n);
        return ans;
    }
};