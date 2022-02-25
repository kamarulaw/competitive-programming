class Solution {
public:
    static bool cmp(int x, int y) { 
      return x >= y; 
    }
  
    int connectSticks(vector<int>& sticks) {
      int cost = 0; 
      priority_queue<int, vector<int>, bool(*) (int, int)> pq(cmp); 
      
      for (int x: sticks) 
        pq.push(x);
      
      while (pq.size() >= 2) { 
        
        int e1 = pq.top(); 
        pq.pop(); 
        
        int e2 = pq.top(); 
        pq.pop(); 
        
        int curr = e1 + e2; 
        
        cost += curr; 
        pq.push(curr);
      }
      return cost; 
    }
};