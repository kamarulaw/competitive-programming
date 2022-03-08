/*
Given a binary image, with pixel value equal to 0 (background) or 1 (foreground), find the boundary pixels. Return a list of the boundary pixel coordinates.

A pixel is a boundary pixel if
1) It's foreground (pixel value = 1)
AND
2) It has at least 1 background pixel among its neighbors.

Example
Image:
0 0 0 0 0 0
0 1 1 1 0 0
0 1 1 1 1 0
0 1 1 1 0 0
0 0 0 1 0 0

Boundary pixels (marked as b)

0 0 0 0 0 0
0 b b b 0 0
0 b 1 1 b 0
0 b b b 0 0
0 0 0 b 0 0

0 1
1 1
*/



vector<vector<int>> boundaryCoords(vector<vector<int>> image) { 
  int m = image.size(); 
  int n = image[0].size(); 
  vector<vector<int>> result; 
  vector<vector<int>> dirs = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) { 
      if (isForeground(image,i,j)) { 
        for (int k = 0; k < dirs.size(); k++) { 
          int nrow = i+dirs[k][0]; 
          int ncol = j+dirs[k][1];
          if (isSafe(m,n,nrow,ncol) && isBackground(image,nrow,ncol)) {
            vector<int> gp = {nrow,ncol};
            result.push_back(gp);
            break; 
          }
        }
      }
    }
  }
  return result; 
}

bool isSafe(int m, int n, int row, int col) { 
  if (0 <= row && row < m && 0 <= col && col < n) 
    return true; 
}

bool isForeground(vector<vector<int>> image, int row, int col) { 
  return image[row][col] == 1; 
}

bool isBackground(vector<vector<int>> image, int row, int col) { 
  return image[row][col] == 0; 
}

// Opportunity be knocking.  You've got to let a motherfucker in