/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
  static bool comp(vector<int> a, vector<int> b) { 
    int rcenter = a[2];
    int ccenter = a[3];
    int ad = abs(a[0] - rcenter) + abs(a[1] - ccenter);
    int bd = abs(b[0] - rcenter) + abs(b[1] - ccenter);
    return ad < bd; 
  }
  
  vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
    vector<int> temp; 
    vector<vector<int>> matrix; 
    for (int i = 0; i < rows; i++) { 
      for (int j = 0; j < cols; j++) { 
        temp = {i,j, rCenter, cCenter};
        matrix.push_back(temp);
      }
    }  
    sort(matrix.begin(), matrix.end(), comp);
    vector<vector<int>> result; 
    for (int i = 0; i < matrix.size(); i++) { 
      matrix[i].pop_back(); 
      matrix[i].pop_back();
    }
    return matrix; 
  }
};

/* SOLUTION 2 */
/* All tests passed */ 
class Solution {
public:
    static bool comp(pair<vector<int>,int> a, pair<vector<int>,int> b)
    {
        return a.second <= b.second;
    }

    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) 
    {
        vector<pair<vector<int>,int>> points;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                pair<vector<int>,int> point;
                point.first = {i,j};
                point.second = abs(rCenter - i) + abs(cCenter - j);
                points.push_back(point);
            }
        }    
        sort(points.begin(), points.end(), comp);
        vector<vector<int>> sol;
        for (int i = 0; i < points.size(); i++)
        {
            sol.push_back(points[i].first);
        }
        return sol;
    }
};
