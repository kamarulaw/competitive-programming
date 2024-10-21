/* SOLUTION 1 - 8/27/21 */
/* All tests passed */
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

/* SOLUTION 2 - 10/21/24 */
/* All tests passed */
class Solution {
public:
    vector<vector<int>> src_to_dst_paths;

    void dfs(int src, int dst, vector<vector<int>> adjlist, vector<bool> visited)
    {
        int start_index = src;
        vector<int> path = {src};
        visited[src] = true;
        pair<int,pair<vector<int>,vector<bool>>> start_pair;
        stack<pair<int,pair<vector<int>,vector<bool>>>> s;
        start_pair.first = start_index;
        start_pair.second.first = path;
        start_pair.second.second = visited;
        s.push(start_pair);
        while (s.size() > 0)
        {
            int top_index = s.top().first; 
            pair<int,pair<vector<int>,vector<bool>>> top = s.top();
            s.pop();
            for (int i = 0; i < adjlist[top_index].size(); i++)
            {
                if (!top.second.second[adjlist[top_index][i]])
                {
                    vector<int> newpath = top.second.first;
                    newpath.push_back(adjlist[top_index][i]);
                    vector<bool> newvisited = top.second.second;
                    newvisited[adjlist[top_index][i]] = true;
                    pair<int,pair<vector<int>,vector<bool>>> newpair;
                    newpair.first = adjlist[top_index][i];
                    newpair.second.first = newpath;
                    newpair.second.second = newvisited;
                    s.push(newpair);
                    if (adjlist[top_index][i] == dst)
                    {
                        src_to_dst_paths.push_back(newpath);
                    }
                }
            } 
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        int n = graph.size();
        vector<int> list;
        vector<bool> visited(n,false);
        vector<vector<int>> adjlist(n,list);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < graph[i].size(); j++)
            {
                adjlist[i].push_back(graph[i][j]);
            }
        }
        dfs(0,n-1,adjlist,visited);
        return src_to_dst_paths;
    }
};
