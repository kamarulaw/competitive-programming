class Solution {
public:
    static bool cmp(pair<int, char> a, pair<int, char> b) { 
      return a.first <= b.first; 
    }
  
    string frequencySort(string s) {
      string res = ""; 
      map<char, int> m; 
      priority_queue<pair<int, char>, vector<pair<int, char>>, bool(*) (pair<int, char>, pair<int, char>)> pq(cmp); 
      for (int i = 0; i < s.length(); i++) 
        m[s[i]]++; 
      for (auto elem: m) 
        pq.push(make_pair(elem.second, elem.first));
      while (!pq.empty()) { 
        pair<int, char> temp = pq.top(); 
        pq.pop(); 
        for (int i = 0; i < temp.first; i++)
          res += temp.second; 
      }
      return res; 
    }
};