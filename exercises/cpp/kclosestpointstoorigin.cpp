/* SOLUTION 1 - 02/25/22 */
/* All tests passed */
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

/* SOLUTION 2 - 12/28/24 */
/* Accepted */
class Solution {
public:
    static bool comp(pair<vector<int>,double> pd1,pair<vector<int>,double> pd2)
    {
        return pd1.second <= pd2.second;
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        int n = points.size();
        vector<pair<vector<int>,double>> points_;
        for (int i = 0; i < n; i++)
        {
            pair<vector<int>,double> pd;
            pd.first = points[i];
            pd.second = pow(pow(points[i][0],2)+pow(points[i][1],2),.5);
            points_.push_back(pd);
        }    
        sort(points_.begin(),points_.end(),comp);
        vector<vector<int>> sol;
        for (int i = 0; i < k; i++)
        {
            sol.push_back(points_[i].first);
        }
        return sol;
    }
};
