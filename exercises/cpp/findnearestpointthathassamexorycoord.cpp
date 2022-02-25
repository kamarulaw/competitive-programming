class Solution {
public:
    static bool cmp(pair<int, vector<int>> a, pair<int, vector<int>> b) { 
      return a.first >= b.first; 
    }
  
    int mhdistance(int x, int y, vector<int> point) { 
      return abs(x-point[0]) + abs(y-point[1]);
    }
  
    bool isPointEqual(vector<int> p1, vector<int> p2) {
      return p1[0] == p2[0] && p1[1] == p2[1];
    }
  
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
      priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, bool(*)(pair<int, vector<int>>, pair<int, vector<int>>)> pq(cmp);
      vector<vector<int>> points_of_interest; 
      for (auto point: points) {
        if (x == point[0] || y == point[1]) {
          points_of_interest.push_back(point);
        }
      }
      
      // TEST CASE 85 INCORRECT
      // vector<int> t1 = {6,2};
      // vector<int> t2 = {3,1};
      // cout << mhdistance(5, 1, t1) << endl;
      // cout << mhdistance(5, 1, t2) << endl;
      
      if (points_of_interest.size() == 0) 
        return -1; 
      
      for (auto point: points_of_interest) {
        pq.push(make_pair(mhdistance(x, y, point), point));
      }
      
      int minmhd = pq.top().first;
      
      for (int i = 0; i < points.size(); i++) { 
        if (mhdistance(x,y,points[i]) == minmhd) {
          return i; 
        }
      }
      return -1; 
    }
};