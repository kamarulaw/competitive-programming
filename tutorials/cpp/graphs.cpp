#include <queue>
#include <vector>
#include <iostream>
using namespace std;

// TEST GRAPHS
vector<vector<int>> g1; 
vector<vector<int>> g2; 

// Breadth First Search
void bfs(vector<vector<int>> graph, int start) { 
  cout << "GOT HERE" <<endl;
  queue<int> q; 
  vector<bool> vis; 
  int n = graph.size(); 
  for (int i = 0; i < n; i++)
    vis.push_back(false);
  q.push(start);
  vis[start] = true;
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
  return;   
}
  

// UTIL 
void addEdge(vector<vector<int>>g,int s,int d) { 
  cout << "gh" << endl; 
  g[s].push_back(d);
  g[d].push_back(s);
  cout << "gh2" <<endl; 
  return; 
}

void initGraph(vector<vector<int>> g, int n) { 
  cout << "GOT HERE TOO" << endl; 
  vector<int> evec; 
  for (int i = 0; i <= n; i++) 
    g.push_back(evec);
  return; 
}

int main() {
  // Create graph1
  initGraph(g1,7);
  addEdge(g1,1,2);
  addEdge(g1,1,3);
  addEdge(g1,2,4);
  addEdge(g1,2,5);
  addEdge(g1,3,6);
  addEdge(g1,3,7);
  
  bfs(g1,1);
}
