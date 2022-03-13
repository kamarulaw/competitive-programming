class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
      int result = 0; 
      map<string, int> m1; 
      map<string, int> m2; 
      for (int i = 0; i < words1.size(); i++) 
        m1[words1[i]]++;
      for (int i = 0; i < words2.size(); i++) 
        m2[words2[i]]++; 
      for (pair elem: m1) {
        if (m1.count(elem.first) == 1 && m2.count(elem.first) == 1) {
          if (elem.second == 1 && m2[elem.first] == elem.second) { 
            result++; 
          }
        }
      }
      return result; 
    }
};