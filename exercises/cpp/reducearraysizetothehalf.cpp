class Solution {
public:
    int minSetSize(vector<int>& arr) {
      map<int, int> m; 
      int n = arr.size(); 
      int at_least_half = n - n/2; 
      priority_queue<int> pq; 
      for (int x: arr) 
        m[x]++; 
      for (auto elem: m) 
        pq.push(elem.second);
      int count = 0; 
      int num_elems = 0; 
      while (!pq.empty() && count < at_least_half) { 
        num_elems++; 
        count += pq.top(); 
        pq.pop(); 
      }
      return num_elems; 
    }
};