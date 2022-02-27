class Solution {
public:
    vector<int> pscores; 
    vector<vector<int>> paths; 
  
    int pscore(vector<int> path) { 
      int score = INT_MAX; 
      for (int i = 0; i < path.size(); i++) 
        score = min(score, path[i]);
      return score; 
    }
  
    void dfs(int i, int j, vector<int> path, vector<vector<bool>> visited, vector<vector<int>> grid) { 
      int m = grid.size(); 
      int n = grid[0].size(); 
      if (i >= m || j >= n || i < 0 || j < 0 || visited[i][j] == true) 
        return; 
      if (i == m-1 && j == n-1) {
        paths.push_back(path);
        return;
      }
      path.push_back(grid[i][j]);
      visited[i][j] = true; 
      dfs(i,j+1,path,visited,grid);
      dfs(i,j-1,path,visited,grid);
      dfs(i+1,j,path,visited,grid);
      dfs(i-1,j,path,visited,grid);
    }
  
    int maximumMinimumPath(vector<vector<int>>& grid) {   
      int m = grid.size(); 
      int n = grid[0].size(); 
      vector<int> p; 
      vector<bool> visited_row; 
      vector<vector<bool>> visited; 
      for (int i = 0; i < n; i++) 
        visited_row.push_back(false);
      for (int i = 0; i < m; i++) 
        visited.push_back(visited_row);
      dfs(0,0,p,visited,grid);
      for (auto elem: paths) 
        pscores.push_back(pscore(elem));
      sort(pscores.begin(),pscores.end());
      return pscores[pscores.size()-1];
    }
};