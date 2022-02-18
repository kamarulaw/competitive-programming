class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
      vector<string> cities; 
      map<string, string> m;
      for (int i = 0; i < paths.size(); i++) { 
        string src = paths[i][0]; 
        string dst = paths[i][1]; 
        cities.push_back(src);
        m[src] = dst; 
      }
      string curr = cities[0];
      string prev; 
      while (curr != "") { 
        prev = curr; 
        curr = m[curr];
      }
      return prev; 
    }
};