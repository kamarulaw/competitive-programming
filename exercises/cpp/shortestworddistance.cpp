class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
      int md = INT_MAX; 
      map<string, vector<int>> m; 
      for (int i = 0; i < wordsDict.size(); i++) { 
        if (wordsDict[i] == word1) 
          m[word1].push_back(i);
        if (wordsDict[i] == word2)
          m[word2].push_back(i);
      }
      for (int i = 0; i < m[word1].size(); i++) { 
        for (int j = 0; j < m[word2].size(); j++) { 
          md = min(md, abs(m[word1][i] - m[word2][j]));
        }
      }
      return md; 
    }
};