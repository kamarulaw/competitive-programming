/* SOLUTION 1 - 8/26/21*/ 
/* All tests passed */
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
      // initialize graph 
      vector<vector<int>> graph; 
      for (int i = 0; i < n; i++) {
        vector<int> evec; 
        graph.push_back(evec);
      }
      
      // add edges to graph 
      for (int i = 0; i < edges.size(); i++) {
        vector<int> edge = edges[i];
        int src = edge[0];
        int dst = edge[1];
        graph[src].push_back(dst);
        graph[dst].push_back(src);
      }
      
      // perform bfs (also could have performed dfs)
      queue<int> q; 
      q.push(start);  
      vector<bool> visited;
      for (int i = 0; i < n; i++) { 
        if (i == start) 
          visited.push_back(true);
        else
          visited.push_back(false);
      }
     
      while (q.size() > 0) { 
        int top = q.front(); 
        q.pop(); 
        if (top == end)
          return true; 
        for (int i = 0; i < graph[top].size(); i++) { 
          int curr = graph[top][i];
          if (visited[curr] == false) { 
            visited[curr] = true; 
            q.push(curr);
          }
        }
      }
      return false;
    } 
};

/* SOLUTION 2 - 10/20/24 */
/* All tests passed */
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        if (edges.size() == 0 || source == destination)
        {
            return true; 
        }
        vector<int> v;
        vector<bool> visited(n,false);
        vector<vector<int>> graph(n,v);

        for (int i = 0; i < edges.size(); i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        q.push(source);
        visited[source] = true;

        while (q.size() > 0)
        {
            int front = q.front();
            q.pop();

            for (int node_index = 0; node_index < graph[front].size(); node_index++)
            {
                if (!visited[graph[front][node_index]])
                {
                    if (graph[front][node_index] == destination)
                    {
                        return true;
                    }
                    q.push(graph[front][node_index]);
                    visited[graph[front][node_index]] = true;
                }
            }
        }
        return false;
    }
};
