class Solution {
public:
  
  vector<vector<int>> paths; 
  
  void allpathshelper(vector<bool> visited, int start, int end, vector<vector<int>> graph, vector<int> path) { 
    visited[start] = true; 
    path.push_back(start);
    
    if (start == end) {
      paths.push_back(path);
    } else {
      for (int i = 0; i < graph[start].size(); i++) { 
        int curr = graph[start][i]; 
        if (visited[curr] == false) { 
          allpathshelper(visited, curr, end, graph, path);
        }
      }
    }
    visited[start] = false; 
  }
  
  vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    // redefine graph in adjacency list format
    int n = graph.size(); 
    vector<vector<int>> newgraph; 
    for (int i = 0; i < n; i++) {
      vector<int> evec; 
      newgraph.push_back(evec);
    }
    for (int i = 0; i < graph.size(); i++) { 
      vector<int> graphinodes = graph[i];
      for (int j = 0; j < graphinodes.size(); j++) { 
        newgraph[i].push_back(graphinodes[j]);
      }
    }  
    
    // dfs
    vector<int> path; 
    vector<bool> visited; 
    for (int i = 0; i < n; i++) 
      visited.push_back(false);
    allpathshelper(visited, 0, n-1, newgraph, path);
    return paths; 
  }
};