class Solution {
public:
    double distanceFromOrigin(vector<int> point) { 
      return sqrt(pow(point[0],2) + pow(point[1],2));
    }
  
    static bool cmp(pair<double, vector<int>> a, pair<double, vector<int>> b) { 
      return a.first >= b.first; 
    }
  
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      vector<vector<int>> result; 
      priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, bool(*)(pair<double, vector<int>>, pair<double, vector<int>>)> pq(cmp);
      for (int i = 0; i < points.size(); i++) 
        pq.push(make_pair(distanceFromOrigin(points[i]), points[i]));
      while (k > 0) { 
        result.push_back(pq.top().second);
        pq.pop(); 
        k--; 
      }
      return result; 
    }
};
