class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      vector<string> res;
      map<int, string> m; 
      priority_queue<int> pq; 
      
      for (int x: score) 
        pq.push(x);
      
      int place = 1; 
      while (!pq.empty()) {
        int elem = pq.top(); 
        pq.pop(); 
        
        if (place == 1) { 
          m[elem] = "Gold Medal";
        } else if (place == 2) { 
          m[elem] = "Silver Medal";
        } else if (place == 3) { 
          m[elem] = "Bronze Medal";
        } else {
          m[elem] = to_string(place); 
        }
        place++; 
      }
      
      for (int x: score)
        res.push_back(m[x]);
      return res; 
    }
};