#include <queue>
#include <stack>
#include <vector>
#include <iostream>
using namespace std;

// Depth First Search
void dfs(vector<vector<int>> graph, int start) { 
  stack<int> s; 
  vector<bool> vis; 
  int n = graph.size(); 
  for (int i = 0; i <= n; i++)
    vis.push_back(false);
  s.push(start);
  vis[0] = true; vis[start] = true; 
  cout << start << " "; 
  while (!s.empty()) { 
    int top = s.top(); 
    s.pop(); 
    for (int i = 0; i < graph[top].size(); i++) { 
      int curr = graph[top][i];
      if (vis[curr] == false) { 
        s.push(curr);
        vis[curr] = true; 
        cout << curr << " ";
      }
    }
  }
  cout << endl; 
  return;   
}

// Breadth First Search
void bfs(vector<vector<int>> graph, int start) { 
  queue<int> q; 
  vector<bool> vis; 
  int n = graph.size(); 
  for (int i = 0; i <= n; i++)
    vis.push_back(false);
  q.push(start);
  vis[0] = true; vis[start] = true; 
  cout << start << " "; 
  while (!q.empty()) { 
    int front = q.front(); 
    q.pop(); 
    for (int i = 0; i < graph[front].size(); i++) { 
      int curr = graph[front][i];
      if (vis[curr] == false) { 
        q.push(curr);
        vis[curr] = true; 
        cout << curr << " ";
      }
    }
  }
  cout << endl; 
  return;   
}
  
// UTIL 
vector<vector<int>> init(int n) { 
  vector<int> evec; 
  vector<vector<int>> graph; 
  for (int i = 0; i <= n; i++) 
    graph.push_back(evec);
  return graph; 
}

vector<vector<int>> addUedge(vector<vector<int>>g, int s, int d) { 
  g[s].push_back(d);
  g[d].push_back(s);
  return g; 
}

vector<vector<int>> addDedge(vector<vector<int>>g, int s, int d) { 
  g[s].push_back(d);
  return g; 
}

int main() {
  // Create Undirected Graph
  vector<vector<int>> g1 = init(15);
  g1 = addUedge(g1,1,2);
  g1 = addUedge(g1,1,3);
  g1 = addUedge(g1,2,4);
  g1 = addUedge(g1,2,5);
  g1 = addUedge(g1,3,6);
  g1 = addUedge(g1,3,7);
  g1 = addUedge(g1,4,8);
  g1 = addUedge(g1,4,9);
  g1 = addUedge(g1,5,10);
  g1 = addUedge(g1,5,11);
  g1 = addUedge(g1,6,12);
  g1 = addUedge(g1,6,13);
  g1 = addUedge(g1,7,14);
  g1 = addUedge(g1,7,15);
  
  // Test
  bfs(g1,1);
  dfs(g1,1);
  
  return 0;
}
