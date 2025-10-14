class Solution {
public:
    bool dfs(int i,int j,int ind, vector<vector<char>>& board, string word, vector<vector<bool>> &visited, int n,int m){
        if(ind == word.size()) return true;

        if(i<0 || j<0 || i>m-1 || j>n-1 || visited[i][j] == true || board[i][j] != word[ind])    {return false;}

        visited[i][j] = true;

        bool found = dfs(i+1,j,ind+1,board,word,visited,n,m) || dfs(i,j+1,ind+1,board,word,visited,n,m) || dfs(i,j-1,ind+1,board,word,visited,n,m) || dfs(i-1,j,ind+1,board,word,visited,n,m);

        visited[i][j] = false;

        return found;

    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m,vector<bool> (n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == word[0]){
                    if(visited[i][j] == false){
                        if(dfs(i,j,0,board,word,visited,n,m)) return true;
                    }
                }
            }
        }
        return false;
    }
};