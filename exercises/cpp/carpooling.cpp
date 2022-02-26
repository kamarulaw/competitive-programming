class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b) { 
      return a[2] <= b[2];
    }
  
    bool carPooling(vector<vector<int>>& trips, int capacity) {
      priority_queue<vector<int>, vector<vector<int>>, bool(*)(vector<int>, vector<int>)> pq(cmp);
      for (auto trip: trips) 
        pq.push(trip);
      
      vector<int> furthest_trip = pq.top(); 
      vector<int> timestamps; 
      for (int i = 0; i <= furthest_trip[2]; i++) 
        timestamps.push_back(0);
      
      while (!pq.empty()) { 
        vector<int> curr_trip = pq.top(); 
        int np = curr_trip[0];
        int fr = curr_trip[1];
        int to = curr_trip[2];
        pq.pop();
        for (int i = fr; i < to; i++) {
          timestamps[i] += np;
          if (timestamps[i] > capacity){
            return false; 
          }
        }
      }
      return true; 
    }
};