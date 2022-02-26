class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b) { 
      return a.second <= b.second; 
    }
  
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int> m; 
      vector<int> result; 
      priority_queue<pair<int, int>, vector<pair<int, int>>, bool(*)(pair<int,int>, pair<int,int>)> pq(cmp); 
      for (int elem: nums) 
        m[elem]++; 
      for (auto elem: m)
        pq.push(make_pair(elem.first, elem.second));
      while (k > 0) { 
        result.push_back(pq.top().first);
        pq.pop(); 
        k--; 
      }
      return result; 
    }
};
