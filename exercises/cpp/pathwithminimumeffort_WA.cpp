class Solution {
public:
    vector<int> efforts; 
    vector<vector<int>> paths; 
    vector<vector<int>> heights_; 
    
    int effort(vector<int> path) { 
      int e = INT_MIN; 
      for (int i = 1; i < path.size(); i++) 
        e = max(e, abs(path[i] - path[i-1]));
      return e; 
    }
  
    void dfs(int i, int j, vector<int> path, vector<vector<bool>> visited) { 
      int m = heights_.size(); 
      int n = heights_[0].size();
      if (i < 0 || i >= m || j < 0 || j >= n || visited[i][j] == true)
        return;
      if (i == m-1 && j == n-1) { 
        paths.push_back(path);
        return;
      }
      path.push_back(heights_[i][j]);
      visited[i][j] = true; 
      dfs(i,j-1,path,visited);
      dfs(i,j+1,path,visited);
      dfs(i+1,j,path,visited);
      dfs(i-1,j,path,visited);
    }
  
    int minimumEffortPath(vector<vector<int>>& heights) {
      vector<int> p; 
      heights_ = heights; 
      int m = heights.size(); 
      int n = heights[0].size(); 
      vector<bool> visited_row; 
      vector<vector<bool>> visited; 
      for (int i = 0; i < n; i++) 
        visited_row.push_back(false);
      for (int i = 0; i < m; i++) 
        visited.push_back(visited_row);
      dfs(0,0,p,visited);
      for (vector<int> elem: paths)
        efforts.push_back(effort(elem));  
      sort(efforts.begin(), efforts.end()); 
      return efforts[0];
    }
};