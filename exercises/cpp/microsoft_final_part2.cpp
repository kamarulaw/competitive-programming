#include <queue>
#include <vector>
#include <iostream>

using namespace std; 

bool inBounds(int row, int col, int m, int n) { 
    if (row < 0 || row >= m)
        return false; 
    if (col < 0 || col >= n)
        return false; 
    return true;
}

void bfs(vector<vector<int>> mat, vector<vector<bool>> vis, vector<int> start_coord) { 
    int m = mat.size(); 
    int n = mat[0].size(); 
    queue<vector<int>> q; 
    q.push(start_coord);
    vis[start_coord[0]][start_coord[1]] = true; 
    while (q.size() != 0) { 
        vector<int> top = q.front(); 
        int x = top[0];
        int y = top[1]; 
        q.pop();
    
        cout << mat[x][y] << ", ";
        vector<int> xDeltas = {1,0,-1}; 
        vector<int> yDeltas = {1,0,-1};
        for (auto xElem: xDeltas) { 
            for (auto yElem: yDeltas) { 
                int newX = x + xElem; 
                int newY = y + yElem; 
                if (inBounds(newX, newY, m, n) && vis[newX][newY] == false) { 
                    vector<int> coord = {newX, newY}; 
                    q.push(coord);
                    vis[newX][newY] = true; 
                }
            }
        }
    }

}

int main() {
    vector<vector<int>> mat = {{1,2,3,4,5,6,7},
    {8,9,10,11,12,13,14},
    {15,16,17,18,19,21,22}};
    
    int m = mat.size(); 
    int n = mat[0].size(); 

    // initialize visited array
    vector<vector<bool>> vis; 
    vector<bool> row;
    for (int i = 0; i < n; i++) 
        row.push_back(false);
    for (int i = 0; i < m; i++) 
        vis.push_back(row); 

    // start coordinate
    vector<int> start = {0,4}; 

    // perform bfs
    bfs(mat,vis,start);
    return 0;
}
