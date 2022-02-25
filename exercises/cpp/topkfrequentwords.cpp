class Solution {
public:
    static bool cmp(pair<string,int> a, pair<string, int> b) { 
      if (a.second == b.second)
        return a.first.compare(b.first) >= 0; 
      return a.second <= b.second; 
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
      map<string, int> m;
      vector<string> result; 
      priority_queue<pair<string, int>, vector<pair<string, int>>, bool(*)(pair<string,int>,pair<string,int>)> pq(cmp);
      for (string elem: words)
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