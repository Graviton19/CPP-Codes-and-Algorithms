class Solution {
  public:
    void func(int row,int col, vector<string> &ans,string s,vector<vector<int>> &maze, vector<vector<bool>> &visited,int n){
        
        if(row == n-1 && col == n-1){
            ans.push_back(s);
            return;
        }    
        //Downward 
        if(row+1<n && visited[row+1][col] == false && maze[row+1][col] == 1){
            visited[row+1][col] = true;
            func(row+1,col,ans,s + 'D',maze,visited,n);
            visited[row+1][col] = false;
        }
        
        //left
        if(col-1 >= 0 && visited[row][col-1] == false && maze[row][col-1] == 1){
            visited[row][col-1] = true;
            func(row,col-1,ans,s+'L',maze,visited,n);
            visited[row][col-1] = false;
        }
        
        //right
        if(col+1 < n && visited[row][col+1] == false && maze[row][col+1] == 1){
            visited[row][col+1] = true;
            func(row,col+1,ans,s+ 'R',maze,visited,n);
            visited[row][col+1] = false;
        }
        
        //upward
        if(row - 1>=0 && visited[row-1][col] == false && maze[row-1][col] == 1){
            visited[row-1][col] = true;
            func(row-1,col,ans,s + 'U',maze,visited,n);
            visited[row-1][col] = false;
        }
        
    }
    
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string> ans;
        vector<vector<bool>> visited(n,vector<bool> (n,false));
    
        if(maze[0][0] == 1){
            visited[0][0] = true;
            func(0,0,ans,"",maze,visited,n);}
        return ans;
    }
};